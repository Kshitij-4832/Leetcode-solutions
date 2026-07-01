class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size(), col = matrix.size();
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < col; j++)
        {
            swap(matrix[i][j], matrix[row - i - 1][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    }
};