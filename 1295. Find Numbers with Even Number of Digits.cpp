class Solution {
public:
    int FindNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if((9<=nums[i] and nums[i]<=99) or (1000<=nums[i] and nums[i]<=9999) or (nums[i]==10000)){
                count+=1;
            }
        }
        return count;
    }
};
