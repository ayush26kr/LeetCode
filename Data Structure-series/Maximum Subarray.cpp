class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's algo
        int sum=INT_MIN;
        int p=0;
        for(auto i:nums){
            if(p<0)
                p=0;
            p+=i;
            sum=max(sum,p);
        }
        return sum;
    }
};
