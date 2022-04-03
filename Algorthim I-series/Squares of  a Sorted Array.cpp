class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int lp=0;
        int rp=nums.size()-1;
        int mp=nums.size()-1;
        vector<int>ans(nums.size());
        while(lp<=rp){
        if(abs(nums[lp])<abs(nums[rp])){
            ans[mp]=nums[rp]*nums[rp];
            rp--;
        }
        else{
            ans[mp]=nums[lp]*nums[lp];
            lp++;
        }
        mp--;
        }
        return ans;
    }
};
