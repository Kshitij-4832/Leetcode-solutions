class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        for(int i= 1;i<=n;i++){
            if(mpp.find(i)==mpp.end()){
                return i;
            }
        }
        return n+1;
    }
};