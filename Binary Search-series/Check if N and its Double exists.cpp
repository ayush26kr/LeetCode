class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        bool flag=false;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if((arr[i]%2==0&&arr[i]/2==arr[j]) || (arr[j]%2==0 && arr[j]/2==arr[i]))
                    flag=true;
            }
        }
        return flag;
    }
};
