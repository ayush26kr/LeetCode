class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //------------------------------------------method - by using pair----------------------------------------
        //first value of pair denotes how many he trusts
        //second value of pair denotes how many he is trusted by
        vector<pair<int,int>>arr(n+1,{0,0});
        for(int i=0;i<trust.size();i++){
            arr[trust[i][0]].first+=1;
            arr[trust[i][1]].second+=1;
        }
        
        //now find who is trusted by n-1 and do not trust anyone
        for(int i=1;i<=n;i++){
            if(arr[i].first==0 && arr[i].second==n-1)
                return i;
        }
        return -1;
        
    }
};
