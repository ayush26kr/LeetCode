class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            buyPrice=min(buyPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-buyPrice);
        }
        return maxProfit;
    }
};
