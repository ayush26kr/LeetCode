class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans;
        int prod=1;
        int sum=0;
        while(n){
            int temp=n%10;
            sum+=temp;
            prod*=temp;
            n=n/10;
        }
        return prod-sum;
      }
};
