class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n],r=0;
        for(int i=0;i<n;i++){
            r=(r)^(start+2*i);
        }
            
        return r;
    }
};
