class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s(allowed.begin(), allowed.end());
        int count = 0;

        for (auto &word : words) {
            bool consistent = true;
            for (char c : word) {
                if (s.find(c) == s.end()) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) count++;
        }

        return count;
    }
};
