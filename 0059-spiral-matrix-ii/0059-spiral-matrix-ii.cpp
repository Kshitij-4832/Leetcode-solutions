class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        vector<int> numbers;
        int k = 1;
        int top = 0, left = 0;
        int right = n - 1, bottom = n - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                matrix[top][i] = k;
                k++;
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = k;
                k++;
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    matrix[bottom][i] = k;
                    k++;
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left] = k;
                    k++;
                }
                left++;
            }
        }
        
        return matrix;
    }
};