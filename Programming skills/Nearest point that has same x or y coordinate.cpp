class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size(),ans=-1,mn=INT_MAX,manhattan=0;
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y)
            {
                manhattan=abs(x-points[i][0])+abs(y-points[i][1]);
                if(manhattan<mn){
                    mn=manhattan;
                    ans=i;
                }
            }
        }
        return ans;
    }
};
