class Solution {
public:
    int beautySum(string s) {
        int count=0;
        for(int i=0 ; i<s.size() ; i++){
            vector<int> v(26,0);
            for(int j=i ; j<s.size() ; j++){
                char ch = s[j];
                v[ch-'a']++;

                int maxfreq = 0, minfreq = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (v[k] > 0) {
                        maxfreq = max(maxfreq, v[k]);
                        minfreq = min(minfreq, v[k]);
                    }
                }

                count += maxfreq - minfreq;
            }
        }

        return count;
    }
};