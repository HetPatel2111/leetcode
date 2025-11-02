class Solution {
public:
    bool issafe(vector<string>& v, int row, int col, int n) {
        for (int i = 0; i < row; i++) {
            if (v[i][col] == 'Q') return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (v[i][j] == 'Q') return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (v[i][j] == 'Q') return false;
        }
        return true;
    }

    void nq(int& count, int row, int n, vector<string>& v) {
        if (row == n) {
            count++;
            return;
        }

        for (int i = 0; i < n; i++) {
            if (issafe(v, row, i, n)) {
                v[row][i] = 'Q';
                nq(count, row + 1, n, v);
                v[row][i] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        int count = 0;
        vector<string> v(n, string(n, '.'));
        nq(count, 0, n, v);
        return count;
    }
};
