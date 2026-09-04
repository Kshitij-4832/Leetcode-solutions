class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int Max = INT_MIN, size = piles.size();
        for (int i = 0; i < size; i++) {
            Max = max(Max, piles[i]);
        }
        int left = 1, right = Max, ans = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            long long int sum = 0;
            for(int i =  0;i<size;i++){
                if(piles[i]%mid==0){
                    sum = sum+(piles[i]/mid);
                }
                else{
                    sum = sum+floor(piles[i]/mid)+1;
                }
            }
            if(sum<=h){
                right = mid-1;
                ans = mid;
            }
            else {
                left = mid+1;
            }
        }
        return min(left,ans);
    }
};