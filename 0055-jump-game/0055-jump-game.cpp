class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size(),maxindex = 0;
        if(size==1){
            return true;
        }
        for(int i = 0;i<size;i++){
            int c = nums[i]+i;
            if(maxindex<i){
                return false;
            }
            maxindex = max(maxindex,c);
        } 
        return true;
    }
};