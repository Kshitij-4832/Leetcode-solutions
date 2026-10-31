class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        int duprow = row;
        int dupcol = col;
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        while (col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            col--;
        }
        row = duprow;
        col = dupcol;
        while (row < n && col >= 0) {
            if (board[row][col] == 'Q') {
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void Solve(vector<string>& board, vector<vector<string>>& ans, int col,
               int n) {
        if (col == board.size()) {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < board.size(); row++) {
            if (isSafe(board, row, col, n)) {
                board[row][col] = 'Q';
                Solve(board, ans, col + 1, n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,"");
        string str(n, '.');
        for (int i = 0; i < n; i++) {
            board[i] = str;
        }
        Solve(board, ans, 0, n);
        return ans;
    }
};