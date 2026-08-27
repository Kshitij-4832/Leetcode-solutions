class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int size = nums.size(),mid = 0;
        for(int i = 0;i<size;i++){
            if(i==size/2){
                mid = nums[i];
            }
            mpp[nums[i]]++;
        }   
        if(mpp[mid]==1){
            return true;
        }
        return false;
    }
};