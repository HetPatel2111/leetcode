class Solution {
public:
    long long removeZeros(long long n) {
        string s;
        long long temp = n;
        long long size = 0;

        while (temp > 0) {
            if (temp % 10 != 0) {
                s += ('0' + (temp % 10));
            }
            temp /= 10;
        }

        reverse(s.begin(), s.end());

        long long ans = 0;
        int power = 0;

        for (int i = 0; i < s.size(); i++) {
            ans = ans * 10 + (s[i] - '0');
        }

        return ans;
    }
};
