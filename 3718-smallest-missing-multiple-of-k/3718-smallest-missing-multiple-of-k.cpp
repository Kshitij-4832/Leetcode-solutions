class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int size = nums.size(),copy = k;
        for(int i = 0;i<size;i++){
            if(nums[i]%k==0){
                mpp[nums[i]]++;
            }
        }   
        for(auto itr:mpp){
            if(mpp.find(copy)!=mpp.end()){
                copy = copy+k;
            }
            else{
                return copy;
            }
        }
        return copy;
    }
};