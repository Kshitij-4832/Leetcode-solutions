class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int size = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 0) {
                mpp[nums[i]]++;
            }
        }
        int ans = INT_MIN;
        int key = -1;
        for(auto p:mpp){
            if(p.second>ans){
                ans = p.second;
                key = p.first;
            }
        }
        return key;
    }
};