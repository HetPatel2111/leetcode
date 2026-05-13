class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int l=0;
        int h=m-1;

        while(l<=h){
            int mid = l + (h-l)/2;

            if(matrix[mid][0]<=target && target<=matrix[mid][n-1]){
                int innerL = 0;
                int innerH = n-1;

                while(innerL <= innerH){
                    int innerMid = innerL + (innerH-innerL)/2;

                    if(matrix[mid][innerMid]==target) return true;

                    if(matrix[mid][innerMid] > target) innerH=innerMid-1;
                    else innerL=innerMid+1;
                }

                return false;
            }

            if(matrix[mid][0] > target) h=mid-1;
            else l=mid+1;
        }

        return false;
    }
};