class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        //remove the duplicates
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
            if(nums.size()<=2)
                return nums.size();
            //Count the number of elements that have either smaller values before and after them or the elements that have greater values before and after them
            
            for(int i=1;i<nums.size()-1;i++)
                if(nums[i-1]<nums[i] && nums[i+1]<nums[i] || nums[i-1]>nums[i] && nums[i+1]>nums[i])
                    count++;
            
            return count+2;  //2 is added to count the first and the last element
    } 
};
