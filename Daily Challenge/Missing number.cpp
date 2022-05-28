class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int ans;
        int n=nums.size();
        ans= (n*(n+1)/2) - accumulate(nums.begin(),nums.end(),0);
        return ans;
    }
};
