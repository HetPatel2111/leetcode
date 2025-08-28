class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        vector<int> temp;
        int n = grid.size();

        /* Lower part (descending) */
        int row = 1;
        int col = 0;
        int count = n;
        for (int i = 0; i < n - 1; i++) {
            temp.clear();
            int tempRow = row;
            int tempCol = col;
            while (tempRow < n && tempCol < n) {
                temp.push_back(grid[tempRow][tempCol]);
                tempRow++;
                tempCol++;
            }
            sort(temp.begin(), temp.end(), greater<int>());

            tempRow = row;
            tempCol = col;
            for (int val : temp) {
                grid[tempRow][tempCol] = val;
                tempRow++;
                tempCol++;
            }
            row++;
        }

        /* Main diagonal (descending) */
        row = 0;
        col = 0;
        temp.clear();
        for (int j = 0; j < n; j++) {
            temp.push_back(grid[row][col]);
            row++;
            col++;
        }
        sort(temp.begin(), temp.end(), greater<int>());
        row = 0;
        col = 0;
        for (int val : temp) {
            grid[row][col] = val;
            row++;
            col++;
        }

        /* Upper part (ascending) */
        col = 1;
        row = 0;
        for (int i = 0; i < n - 1; i++) {
            temp.clear();
            int tempRow = row;
            int tempCol = col;
            while (tempRow < n && tempCol < n) {
                temp.push_back(grid[tempRow][tempCol]);
                tempRow++;
                tempCol++;
            }
            sort(temp.begin(), temp.end());

            tempRow = row;
            tempCol = col;
            for (int val : temp) {
                grid[tempRow][tempCol] = val;
                tempRow++;
                tempCol++;
            }
            col++;
        }

        return grid;
    }
};
