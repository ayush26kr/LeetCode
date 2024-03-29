class Solution {
    private:
  unordered_map<char,vector<char>>mp;
  vector<vector<int>>memo;
    int Mod=1e9+7;
public:
    int countVowelPermutation(int n) {
    memo.resize(26,vector<int>(n+1,-1));
    mp['c']={'a','e','i','o','u'};
    mp['a']={'e'};
    mp['e']={'a','i'};
    mp['i']={'a','e','o','u'};
    mp['o']={'i','u'};
    mp['u']={'a'};
        return fun('c',n)%Mod;
    }
    
    int fun(char ch,int n)
    {
     if(n<=1)
     {
         switch(ch)
         {
             case 'a':
             return 1;
             case 'e':
             return 2;
             case 'i':
             return 4;
             case 'o':
             return 2;
             case 'u':
             return 1;
             default:
             return 5;
         }
     }
        int count=0;
        if(memo[ch-'a'][n]!=-1)
            return memo[ch-'a'][n];
        else
        {
            for(auto c:mp[ch])
                count=(count+fun(c,n-1)%Mod)%Mod;
            return memo[ch-'a'][n]=count%Mod;
                
        }
    }
};
