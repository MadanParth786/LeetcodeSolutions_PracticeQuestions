class Solution {
public:
    vector<int> DecompressRLElist(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i+=2){
            res.insert(res.end(),nums[i],nums[i+1]);
        }
        return res;
    }
};
