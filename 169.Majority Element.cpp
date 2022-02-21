class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int majorityCount = nums.size()/2;
        int a;

        for (int num : nums) {
            int count = 0;
            for (int elem : nums) {
                if (elem == num) {
                    count += 1;
                }
            }

            if (count > majorityCount) {
                 a=num;
            }
    }
         return a;
    }
};
