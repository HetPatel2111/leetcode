class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int l=0;
        bool con=false;
        for(int i=0 ; i<n ; i++){
            if(i+1<n && (intervals[i][1] >= intervals[i+1][0])){
                if(!con){
                    con=true;
                    l=intervals[i][0];
                }
                intervals[i + 1][1] = max(intervals[i][1], intervals[i + 1][1]);
            }
            else{
                if(con){
                    ans.push_back({l,intervals[i][1]});
                    con=false;
                }
                else{
                    ans.push_back({intervals[i][0],intervals[i][1]});
                }
                
            }
        }

        return ans;
    }
};