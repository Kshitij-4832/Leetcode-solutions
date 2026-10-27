class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> mat(m,vector<char>(n,0));
        vector<string>res;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                mat[i][j] = '#';
            }
        }
        for(int i = 0;i<n;i++){
            mat[0][i] = '.';
        }
        for(int i=0;i<m;i++){
            mat[i][n-1] = '.';
        }
        for(int i = 0;i<m;i++){
            string temp = "";
            for(int j = 0;j<n;j++){
                temp.push_back(mat[i][j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};