class Solution {
public:
    string reverseWords(string s) {
        string res;
        int size=s.length();
        for(int l=size-1;l>-1;l--){
            if(s[l]==' ')
                continue;
            int r=l;
            while(l>-1 && s[l]!=' '){
                l--;
            }
            res+=s.substr(l+1,r-l)+" ";
            
        }
        if(res.back()==' ')
                res.pop_back();
        return res;
        
    }
};
