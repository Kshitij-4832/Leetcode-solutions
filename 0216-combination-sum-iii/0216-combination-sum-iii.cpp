class Solution {
public:
    void Combinations(int index,vector<vector<int>>& matrix,int k,int n,vector<int>& res){
        if(k==0&&n==0){
            matrix.push_back(res);
            return;
        }
        if(k==0){
            return;
        }
        for(int i = index;i<=9;i++){
            if(i<=n){
                res.push_back(i);
                Combinations(i+1,matrix,k-1,n-i,res);
                res.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> matrix;
        vector<int> res;
        Combinations(1,matrix,k,n,res);
        return matrix;
    }
};