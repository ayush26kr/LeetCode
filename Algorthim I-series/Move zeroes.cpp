class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1)
            return;
        int l=0;
        int r=0;
        while(l<n && r<n){
        if(nums[l]==0)
            l++;
        else{
            swap(nums[l],nums[r]);
            l++;
            r++;
        }
    }
         return;
    }
};
