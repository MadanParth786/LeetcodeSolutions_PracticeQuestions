class Solution {
public:
    int NumberOfSteps(int num) {
        int count=0;
        while(num>0){
            if(num%2==0){
                count++;
                num/=2;
            }
            if(num%2!=0){
                count++;
                num-=1;
            }
            
        }
        return count;
    }
};
