class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        long int low=0;
        long int high=num/2;
        while(low<=high){
            long int mid=low+(high-low)/2;
            long int sq=mid*mid;
            if(sq==num)
                return true;
            else if(sq<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};
