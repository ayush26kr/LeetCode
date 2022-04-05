class Solution {
public:
    string reverse(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l <= r)
            swap(s[l++], s[r--]);
        return s;
    }
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        int left = 0,right = 0;
        while(left < s.size()) {
            right = left;
            word = "";
            while(right < s.size() && s[right] != ' ')
                word += s[right++];

            if(word.size() > 0) {
                ans += (ans.size() > 0 ? " " : "") + reverse(word);
            }
            while(s[right] == ' ') right++;
            left = right;
        }
        return ans;
    }
};
