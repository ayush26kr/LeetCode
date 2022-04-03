class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s=nums.size();
        int k,l;
        for(k=s-2;k>=0;k--){  //find the non increasing num from end
            if(nums[k]<nums[k+1])
                break;
        }
        if(k<0)
            reverse(nums.begin(),nums.end());  //if no such element just reverse the array & print it
        else
        {
            for(l=s-1;l>k;l--){
                if(nums[l]>nums[k])         //find the first element from end that is greater than nums[k]
                    break;
            }
            swap(nums[k],nums[l]);      //swap both the elements
            reverse(nums.begin()+k+1,nums.end());  
        }
        
    }
};
