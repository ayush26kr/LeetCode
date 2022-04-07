class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>ump;
        unordered_map<int,int>ump2;
        for(auto it:arr){
            ump[it]++;
        }
        for(auto itr:ump){
            ump2[itr.second]++;
        }
        for(auto itrr:ump2){
            if(itrr.second>1)
                return false;
        }
        return true;   
    }
};
