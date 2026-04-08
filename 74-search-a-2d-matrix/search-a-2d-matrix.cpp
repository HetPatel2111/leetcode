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
                int innerL=0;
                int innerH=n-1;

                while(innerL<=innerH){
                    int mid1 = innerL + (innerH - innerL)/2;

                    if(matrix[mid][mid1]==target){
                        return true;
                    }

                    if(target<matrix[mid][mid1]){
                        innerH = mid1-1;
                    }
                    else{
                        innerL = mid1+1;
                    }
                }
                return false;
            }

            if(target<matrix[mid][0]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return false;
    }
};