class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int r,n=arr.size();
        for(int i=0;i<n;i++){
            r+=((i+1)*(n-i)+1)/2*arr[i];
        }
        return r;
    }
};
