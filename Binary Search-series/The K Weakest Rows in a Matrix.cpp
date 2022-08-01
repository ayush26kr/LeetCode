class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>weakest_rows;
        vector<pair<int,int>>pr;
        
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1)
                    count++;
            }
            pr.push_back({count,i});
        }
        sort(pr.begin(),pr.end());
        for(int i=0;i<k;i++)
            weakest_rows.push_back(pr[i].second);
        return weakest_rows;
    }
};
