class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size()*grid.size();

        vector<int> v(n,0);

        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid.size() ; j++){
                v[grid[i][j]-1]++;
            }
        }

        int mis=0;
        int repeat=0;

        for(int i=0 ; i<n ; i++){
            if(v[i]==0) mis=i+1;

            if(v[i]==2) repeat=i+1;
        }

        vector<int> ans;
        ans.push_back(repeat);
        ans.push_back(mis);
    
        return ans;
    }
};