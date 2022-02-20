class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        for(int i=0;i<intervals.size();i++){
            for(int j=1;j<intervals.size();j++){
                if(intervals[i][0]>=intervals[j][0] and intervals[i][1]>=intervals[i][1]){
                    intervals.pop_back();
                }
            }
        }
        return intervals.size();
        
    }
};
