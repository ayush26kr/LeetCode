class Solution {
public:
    int mySqrt(int x) {
        if(x==1||x==0)
            return x;
        int l=1;
        int h=x/2;
        long long answer;
        while(l<=h){
            long long mid=(long long)(l+h)/2;
            if(mid*mid<=x){
                answer=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return answer;
    }
};
