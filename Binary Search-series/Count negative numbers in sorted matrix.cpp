class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //Brute force   O(m*n)
        int count=0;
        for(vector<int>row:grid){
            for(auto num:row){
                if(num<0)
                    count++;
            }
        }
        return count;
    }
};

//Using upper and lower bound
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(vector<int>row:grid)
            ans+=upper_bound(row.rbegin(),row.rend(),-1)-row.rbegin();
        return ans;
        
    }
};
