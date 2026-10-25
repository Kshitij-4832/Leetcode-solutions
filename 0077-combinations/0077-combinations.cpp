class Solution {
public:
    void Combinations(int index,vector<vector<int>>& matrix,vector<int>& arr,vector<int>& res,int n,int k){
        if(index==arr.size()||k==0){
            if(k==0)
            {
                matrix.push_back(res);
            }
            return ;
        }

        res.push_back(arr[index]);
        Combinations(index+1,matrix,arr,res,n,k-1);
        res.pop_back();
        Combinations(index+1,matrix,arr,res,n,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> arr;
        for(int i = 0;i<n;i++){
            arr.push_back(i+1);
        }
        vector<vector<int>>matrix;
        vector<int>res;
        Combinations(0,matrix,arr,res,n,k);
        return matrix;
    }
};