class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
        if (s[i] != ' ') { 
                int j = i;
                for (; j < n && s[j] != ' '; j++) { } 
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
     return s;   
    }
};
