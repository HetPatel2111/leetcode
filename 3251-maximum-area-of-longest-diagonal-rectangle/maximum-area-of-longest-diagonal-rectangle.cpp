class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea=1;
        int len;
        int wid;
        double ans;
        double maxDiognal=INT_MIN;
        for(auto &it : dimensions){
            len = it[0];
            wid = it[1];
            ans = sqrt(len*len + wid*wid);
            if(ans > maxDiognal){
                maxArea = len*wid;
                maxDiognal = ans;
            }
            else if(ans == maxDiognal){
                maxArea=max(maxArea,len*wid);
                maxDiognal=ans;
            } 
        }

        return maxArea;
    }
};