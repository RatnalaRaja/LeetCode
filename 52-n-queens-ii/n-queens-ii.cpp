class Solution {
public:
    bool isvalid(int n, vector<string>& board, int row, int col) {
        if (board.empty()) return false;

        for (int c = col; c >= 0; c--) {
            if (board[row][c] == 'Q') return false;
        }
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }
        for (int i = row, j = col; i < n && j >= 0; i++, j--) {
            if (board[i][j] == 'Q') return false;
        }
        return true;
    }

    void queens(int n, set<vector<string>>& uniqueQueens, vector<string>& str, int col) {
        if (col == n) {
            uniqueQueens.insert(str);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (isvalid(n, str, row, col)) {
                str[row][col] = 'Q';
                queens(n, uniqueQueens, str, col + 1);
                str[row][col] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<string> queen(n, string(n, '.'));
        set<vector<string>> uniqueQueens;
        queens(n, uniqueQueens, queen, 0);
        return uniqueQueens.size();
    }
};