class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string r=s;
        int n=indices.size();
        for(int i=0;i<n;i++){
            r[indices[i]]=s[i];
        }
        return r;
    }
};
