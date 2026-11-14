class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size(),Min = INT_MAX,count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                vector<int> arr;
                for (int k = i; k <= j; k++) {
                    arr.push_back(nums[k]);
                }
                int sum = 0;
                if (arr.size() >= l && arr.size() <= r) {
                    for (int itr : arr){
                        sum = sum+itr;
                    }
                    if(sum>0){
                        count++;
                        Min = min(Min,sum);
                    }
                }
            }
        }
        if(count==0){
            return -1;
        }
        return Min;
    }
};