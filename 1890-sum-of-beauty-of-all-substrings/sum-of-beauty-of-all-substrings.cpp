class Solution {
public:
    int beautySum(string s) {
        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            vector<int> v(26, -1);
            
            for (int j = i; j < n; j++) {
                char ch = s[j];
                v[ch - 'a'] += 1;
                int maxf = 0;
                int minf = INT_MAX;
                for (auto& it : v) {
                    if (it == -1)
                        continue;
                    if (it > maxf)
                        maxf = it;
                    if (it < minf)
                        minf = it;
                }
                count += maxf - minf;
            }

            
        }

        return count;
    }
};