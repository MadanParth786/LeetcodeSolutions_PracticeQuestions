class Solution {
public:
    int balancedStringSplit(string s) {
        int a,b;
        a=0;b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L') b--;
            else
                b++;
            if(b==0){
                a++;
            }
        }
        return a;
        
    }
};
