class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0,end=nums.size()-1,k=nums.size()-1;
        vector<int> vec(nums.size(),1);
        int sq1 = 1,sq2 = 1;
        while(start<=end){
            sq1 = nums[start]*nums[start];
            sq2 = nums[end]*nums[end];
            if(sq2>=sq1){
                vec[k] = sq2;
                end--;
            }
            else {
                vec[k] = sq1;
                start++;
            }
            k--;
        }
        return vec;
    }
};