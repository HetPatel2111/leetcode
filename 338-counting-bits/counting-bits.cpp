class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            // Relation: dp[i] = dp[i / 2] + (i % 2)
            dp[i] = dp[i >> 1] + (i & 1);
        }
        return dp;
    }
};