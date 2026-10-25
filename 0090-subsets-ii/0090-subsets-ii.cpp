class Solution {
public:
    void Combination(int index,vector<int>& nums,vector<vector<int>>& matrix,vector<int>& res){
        if(index==nums.size()){
            matrix.push_back(res);
            return ;
        }
        res.push_back(nums[index]);
        Combination(index+1,nums,matrix,res);
        res.pop_back();
        while(index+1<nums.size()&&nums[index]==nums[index+1]){
            index++;
        }
        Combination(index+1,nums,matrix,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> matrix;
        vector<int>res;
        sort(nums.begin(),nums.end());
        Combination(0,nums,matrix,res);
        return matrix;
    }
};