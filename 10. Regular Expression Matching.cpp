class Solution {
public:
    bool IsMatch(string s, string p) {
        return regex_match(s, regex(pa));
    }
};
