class Solution {
public:
    void reverseString(vector<char>& s) {
        util(s,0,s.size()-1);
        }
    void util(vector<char>&s,int left,int right){
        if(left>=right)
            return;
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        util(s,left+1,right-1);
    }
};
