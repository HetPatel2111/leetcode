class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row0;
        unordered_set<int> col0;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(matrix[i][j]==0){
                    row0.insert(i);
                    col0.insert(j);
                }
            }
        }

        bool ifExistZero;
        for(int i=0 ; i<n ; i++){
            if(row0.find(i) != row0.end()){
                ifExistZero = true;
            }
            else{
                ifExistZero = false;
            }

            for(int j=0 ; j<m ; j++){
                if(ifExistZero){
                    matrix[i][j] = 0;
                }
                else{
                    if(col0.find(j) != col0.end()) matrix[i][j]=0;
                }
            }
        }
    }
};