class Solution {
public:
    void combinator(int index,vector<vector<int>>& matrix,vector<int>& candidates,int target,vector<int>&arr){
        if(index==candidates.size()){
            if(target==0){
                matrix.push_back(arr);
            }
            return ;
        }
        if(candidates[index]<=target){
            arr.push_back(candidates[index]);
            combinator(index,matrix,candidates,target-candidates[index],arr);
            arr.pop_back();
        }
        combinator(index+1,matrix,candidates,target,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> matrix;
        vector<int>arr;
        combinator(0,matrix,candidates,target,arr);
        return matrix;
    }
};