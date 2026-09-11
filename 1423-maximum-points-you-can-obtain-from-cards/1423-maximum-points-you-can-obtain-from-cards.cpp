class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int result = 0,leftsum = 0;
        for(int i = 0;i<k;i++){
            leftsum = leftsum+cardPoints[i];
        }
        result = leftsum;
        int rightpointer = cardPoints.size()-1;
        k--;
        while(k>=0){
            leftsum =  leftsum-cardPoints[k]+cardPoints[rightpointer];
            result = max(result,leftsum);
            rightpointer--;
            k--;
        }
        return result;
    }
};