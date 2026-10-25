class Solution {
public:
    void Combinations(int index,vector<int>&res,vector<int>& nums,vector<vector<int>>& matrix){
        if(index==nums.size()){
            matrix.push_back(res);
            return ; 
        }
        res.push_back(nums[index]);
        Combinations(index+1,res,nums,matrix);
        res.pop_back();
        Combinations(index+1,res,nums,matrix);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>res;
        vector<vector<int>> matrix;
        Combinations(0,res,nums,matrix);
        return matrix;
    }
};