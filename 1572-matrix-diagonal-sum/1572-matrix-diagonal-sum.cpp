class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum  = 0,i1=0,j1=0,i2=0,j2=mat.size()-1;
        for(int k=1;k<=mat.size();k++){
            sum  = sum+mat[i1][j1]+mat[i2][j2];
            if(j1==j2){
                sum = sum-mat[i1][j1];
            }
            i1++,j1++,i2++,j2--;
        }
        return sum;
    }
};