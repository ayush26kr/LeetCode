class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>sets;
        while(n!=1){
            int current=n;
            int sum=0;
            while(current!=0){
                sum+=(current%10)*(current%10);
                current/=10;
            }
            const bool is_in = sets.find(sum) != sets.end();
            if(is_in==true)
                return false;
            
            sets.insert(sum);
            n=sum;
        }
        return true;
        
    }
};
