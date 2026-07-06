class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int size =intervals.size(),count=0;
        for(int i=0;i<size;i++){
            for(int j =0;j<size;j++){
                if(intervals[i][0]>=intervals[j][0]&&intervals[i][1]<=intervals[j][1]&&i!=j){
                    count++;
                    break;
                }
            }
        }
        return size-count;
    }
};