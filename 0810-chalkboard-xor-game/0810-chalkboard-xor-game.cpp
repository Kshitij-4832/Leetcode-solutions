class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int size = nums.size(),xor_sum = 0;
        for(int i:nums){
            xor_sum ^= i; 
        }
        if(xor_sum==0){
            return true;
        }
        if(size%2==0){
            return true;
        }
        return false;
    }
};