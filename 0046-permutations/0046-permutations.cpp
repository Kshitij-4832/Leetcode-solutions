class Solution {
public:
    void generating_permutations(vector<int>&res,vector<int>&nums,vector<bool>&mpp,vector<vector<int>>& matrix){
        if(nums.size()==res.size()){
            matrix.push_back(res);
            return ;
        }
        for(int i = 0;i<nums.size();i++){
            if(mpp[i]==false){
                mpp[i] = true;
                res.push_back(nums[i]);
                generating_permutations(res,nums,mpp,matrix);
                mpp[i] = false;
                res.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> matrix;
       vector<int>res;
       vector<bool>mpp(nums.size(),false);
       generating_permutations(res,nums,mpp,matrix);
        return matrix;
    }
};