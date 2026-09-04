class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int>prefix(size,0);
        vector<int>suffix(size,0);
        int Min = INT_MAX,Max = INT_MIN;
        for(int i =0;i<size;i++){
            Max = max(Max,nums[i]);
            prefix[i]  = Max;
        }
        for(int i=size-1;i>=0;i--){
            Min = min(Min,nums[i]);
            suffix[i] = Min;
        }
        int count = -1;
        for(int i = 0;i<size;i++){
            int score = prefix[i]-suffix[i];
            if(score<=k){
                count = i;
                break;
            }
        }
        return count;
    }
};