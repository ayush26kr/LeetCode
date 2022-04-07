class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(auto it:nums){
            ump[it]++;
        }
        int sum=0;
        for(auto itr:ump){
            if(itr.second==1)
                sum+=itr.first;
        }
        return sum;
    }
};
