class Solution {
public:
    void Combinations(int index,vector<int>& candidates,vector<vector<int>>& mat,vector<int> res,int target){
        if(target==0){
            mat.push_back(res);
            return;
        }
        for(int i = index;i<candidates.size();i++){
            if(i>index&&candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            res.push_back(candidates[i]);
            Combinations(i+1,candidates,mat,res,target-candidates[i]);
            res.pop_back();
        }
        return ;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>mat;
        sort(candidates.begin(),candidates.end());
        vector<int>res;
        Combinations(0,candidates,mat,res,target);
        return mat;
    }
};