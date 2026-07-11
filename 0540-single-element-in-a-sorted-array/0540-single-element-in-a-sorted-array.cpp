class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //Brute force
        int size =  nums.size();
        int ans = 0;
        for(int i=0;i<size;i++)
        {
            ans = ans^nums[i];
        }
        return ans;
    }
};