class Solution {
public:
    int max(int a,int b){
        return (a>b?a:b);
    }
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        unordered_map<char,int>mp;
        int n=s.size();
        int ws=0,we,ans=1,winsize=0;
        for(we=0;we<n;we++){
            mp[s[we]]++;
            winsize=we-ws+1;
            if(mp.size()!=winsize){
                mp[s[ws]]--;
                if(mp[s[ws]]==0)
                    mp.erase(s[ws]);
                ws++;
            }
            ans= max(ans,mp.size());
         }
        return ans;  
    }
};
