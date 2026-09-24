class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0;i<size;i++){
            int sum = nums[i],res = 0;
            while(sum!=0){
                res = res+(sum%10);
                sum = sum/10;
            }
            if(res==i){
                return res;
            }
        }
        return -1;
    }
};