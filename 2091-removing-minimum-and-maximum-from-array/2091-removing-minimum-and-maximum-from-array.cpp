class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int Max = INT_MIN,Min = INT_MAX,size = nums.size(),x = 0,y = 0;
        for(int i = 0;i<size;i++){
            if(Max<nums[i]){
                Max = nums[i];
                x = i;
            }
            if(Min>nums[i]){
                Min = nums[i];
                y = i;
            }
        }
        int a = max(x,y)+1;
        int b = x+(size-y)+1;
        int c = y+(size-x)+1;
        int d = size-min(x,y);
        return min({a,b,c,d});

    }
};