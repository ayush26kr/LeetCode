class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int curr=0,currnext=0,currnextnext=0;
        for(int idx=cost.size()-1;idx>=0;idx--){
            curr=min(currnext,currnextnext)+cost[idx];
            currnextnext=currnext;
            currnext=curr;
        }
        return min(currnext,currnextnext);
    }
};
