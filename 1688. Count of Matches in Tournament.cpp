class Solution {
public:
    int numberOfMatches(int n) {
        int r=0;
        while(n>1){
            if(n%2==0){
                r+=n/2;
                n=n/2;
            }
            else{
                r+=(n-1)/2;
                n=((n-1)/2)+1;
            }
        }
        return r;
    }
};
