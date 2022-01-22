class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;
        //nums.sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]<nums[j]){
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                res.push_back(i);
            }
        }
        
        return res;
    }
};
