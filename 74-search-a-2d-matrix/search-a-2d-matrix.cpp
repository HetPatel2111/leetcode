class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int l=0;
        int h=n-1;

        while(l<=h){
            int mid = l + (h-l)/2;
            if(matrix[mid][0]<=target && target<=matrix[mid][m-1]){
                int il=0;
                int ih=m-1;

                while(il<=ih){
                    int im = il + (ih-il)/2;
                    if(matrix[mid][im]==target) return true;

                    if(matrix[mid][im]<target) il=im+1;
                    else ih=im-1;
                }

                return false;
            }
            else{
                if(matrix[mid][0]>target) h=mid-1;
                else l=mid+1;
            }
        }
        return false;
    }
};