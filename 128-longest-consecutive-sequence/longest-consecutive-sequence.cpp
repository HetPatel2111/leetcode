class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> u;

        for(auto &it: nums) u.insert(it);
        int maxCount=0;

        for(auto &it : u){
            int ele=it;
            if(u.find(ele-1)==u.end()){
                int count=1;
                ele++;
                while(u.find(ele)!=u.end()){
                    ele++;
                    count=count+1;
                }
                maxCount = max(maxCount,count);
            }
        }

        return maxCount;
    }
};