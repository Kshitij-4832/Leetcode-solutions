class Solution {
public:
    void F(int index,int target,vector<int>& candidates,vector<int>& ds,vector<vector<int>>& matrix){
        if(index==candidates.size()){
            if(target==0){
                matrix.push_back(ds);
            }
            return ;
        }
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            F(index,target-candidates[index],candidates,ds,matrix);
            ds.pop_back();
        }
        F(index+1,target,candidates,ds,matrix);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>> matrix;
        F(0,target,candidates,ds,matrix);
        return matrix;   
    }
};