class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int size= nums.size(),max=INT_MIN,curr=0,min = INT_MAX;
        for(int i=0;i<size;i++){
            curr = curr+nums[i];
            if(curr>max){
                max = abs(curr);
            }
            if(curr<0){
                curr =0;
            }
        }
        curr = 0;
        for(int i=0;i<size;i++){
            curr = curr+nums[i];
            if(min>curr){
                min = curr;
            }
            if(curr>0){
                curr =0;
            }
        }
        if(abs(max)>abs(min)){
            return abs(max);
        }
        return abs(min);
    }
};