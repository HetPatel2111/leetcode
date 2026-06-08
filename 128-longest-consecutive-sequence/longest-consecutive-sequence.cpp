class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> s;
        int ans=1;
        for(auto &it : nums) s.insert({it});

        for(auto &it: s){
            int ele=it;

            if(s.find(ele-1)==s.end()){
                int seq=1;

                while(s.find(ele+1)!=s.end()){
                    ele++;
                    seq++;
                }

                ans = max(ans,seq);
            }
        }
        
        return ans;
    }
};