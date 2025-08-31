class Solution {
public:
    int jump(vector<int>& nums) {
        int count = 0;
        int last = nums.size() - 1;
        int maxIdx = 0;
        int end = 0;

        if (nums.size() == 1) return count;

        for (int i = 0; i < nums.size() - 1; i++) {
            maxIdx = max(maxIdx, i + nums[i]);
            if (i == end) {
                count++;
                end = maxIdx;
                if (end >= last) break;
            }
        }
        return count;
    }
};