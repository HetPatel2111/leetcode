class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> ans;
        for(int i=0 ; i<nums.size() ; i++){
            int compliment = target - nums[i];

            if(m.find(compliment) != m.end()){
                ans.push_back(m[compliment]);
                ans.push_back(i);
                return ans;
            }

            m[nums[i]]=i;
        }
        return ans;
    }
};