class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int x) {
        int n = c.size();
        int mx=INT_MIN;
        for(auto k:c){
            mx=max(k,mx);
        }
        vector<bool> ans;
        for(auto k:c){
            if(k+x>=mx){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
