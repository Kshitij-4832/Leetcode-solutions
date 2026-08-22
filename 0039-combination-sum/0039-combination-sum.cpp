class Solution {
public:
    void F(int index,int target,vector<int>& candidates,vector<int>& path,vector<vector<int>>& combination_sets){
        if(index==candidates.size()){
            if(target==0){
                combination_sets.push_back(path);
            }
            return ;
        }
        if(candidates[index]<=target){
            path.push_back(candidates[index]);
            F(index,target-candidates[index],candidates,path,combination_sets);
            path.pop_back();
        }
        F(index+1,target,candidates,path,combination_sets);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>path;
        vector<vector<int>> combination_sets;
        F(0,target,candidates,path,combination_sets);
        return combination_sets;   
    }
};