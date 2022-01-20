class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n;
        n=nums.size();
        vector<int>result(n);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    count+=1;
                }
            }
            result[i]=count;
        }
        return result;
    }
};
