class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       for (auto &s : words) {
            string r(rbegin(s), rend(s));
            if (r == s) return s;
        }
        return "";
    }
};
