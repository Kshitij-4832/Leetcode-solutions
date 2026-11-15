class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr;
        for(int i =0;i<nums.size();i++){
            int ind = abs(nums[i])-1;
            if(nums[ind]<0){
                arr.push_back(ind+1);
            }
            else{
                nums[ind] = -nums[ind]; 
            }
        }
        return arr;
    }
};