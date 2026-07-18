class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size = nums.size();
        int kmax = INT_MIN;
        map<int,int> mpp;
        for(int i = 0;i<size;i++){
            mpp[nums[i]]++;
        }
        int copy = k,ans = 0;
        for(auto it = mpp.rbegin();it!=mpp.rend();++it){
            copy = copy - it->second;
            if(copy<=0){
                ans = it->first;
                break;
            }
        }
        return ans;
    }
};