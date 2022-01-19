class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n,s;
        n=candies.size();
        int max=*max_element(candies.begin(),candies.end());
        vector<bool>result;
        for(int i=0;i<n;i++){
            s= candies[i]+ extraCandies;
            if(s>=max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
        
    }
};
