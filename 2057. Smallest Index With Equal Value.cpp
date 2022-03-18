class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n=nums.size();
        int res;
        for(int i=0;i<n;i++){
            if((i%10)==nums[i]){
                res=i;
                break;
            }
            else{
                res=-1 ;
            }
        }
            return  res;
        
    }
};
