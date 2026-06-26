class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int size = cardPoints.size();
    int leftsum = 0, rightsum = 0;
    for (int i = 0; i < k; i++)
    {
        leftsum += cardPoints[i];
    }
    int maxsum = leftsum;
    int index = size - 1;
    for (int i = size - 1; i >= index; i--)
    {
        rightsum += cardPoints[i];
        index--;
        leftsum -= cardPoints[k - 1];
        k--;
        maxsum = max(maxsum, rightsum + leftsum);
        if (k == 0)
        {
            break;
        }
    }
    return maxsum;
    }
};