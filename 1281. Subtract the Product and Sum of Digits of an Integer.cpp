class Solution {
public:
    int SubtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n>0){
            int a=n%10;
            p*=a;
            s=s+a;
            n=n/10;
        }
        int r=p-s;
        return r;
        
    }
};
