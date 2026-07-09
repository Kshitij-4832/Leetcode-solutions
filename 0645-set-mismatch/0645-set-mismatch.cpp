class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> freq;
        int size = nums.size(),duplicate = 0;
        int sum1 = 0,sum2 = ((size)*(size+1))/2;
        for (int i = 0; i < size; i++) {
            if(freq.find(nums[i])!=freq.end()){
                duplicate = nums[i];
            }
            else{
                sum1 = sum1+nums[i];
            }
            freq[nums[i]]++;
        }
        vector<int> ans = {0,0};
        ans[0] = duplicate;
        ans[1] = abs(sum1-sum2);
        return ans;
    }
};