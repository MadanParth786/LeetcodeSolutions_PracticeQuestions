class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
        if(s[i]==' '){
            c++;
        }
        if(c==k){
            s.erase(s.begin()+i , s.end());
            return s;
        }
    }
    return s;
 }
};
