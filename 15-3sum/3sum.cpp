class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int low = i + 1;
            int high = nums.size() - 1;

            while (low < high) {
                int sum = first + nums[low] + nums[high];

                if (sum == 0){
                    vector<int> temp = {first, nums[low], nums[high]};
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
                    low++;
                    high--;
                } 
                else if (sum < 0) {
                    low++;
                } 
                else {
                    high--;
                }
            }
        }

        for (auto it : s){
            ans.push_back(it);
        }

        return ans;
    }
};
