class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int i=0;
        int j=numbers.size()-1;
        while(numbers[i]+numbers[j]!=target){
            if(numbers[i]+numbers[j]<target)
               i++;
            else
                j--;
        }
        ans.push_back(i+1);
        ans.push_back(j+1);
        return ans;
    }
};

/*
for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(target-numbers[i]==numbers[j]){
                    numbers.push_back(i+1);
                    numbers.push_back(j+1);
                }
            }
        }
        return ans;
*/
