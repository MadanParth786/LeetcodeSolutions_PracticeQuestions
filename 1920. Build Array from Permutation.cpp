class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n;
        n=nums.size();
        vector<int>num1(n);
        for(int i=0;i<n;i++){
            
            num1[i]=nums[nums[i]];
        }
        return num1;
        
    }
};
