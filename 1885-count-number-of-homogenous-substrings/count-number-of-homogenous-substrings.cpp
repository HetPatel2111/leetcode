class Solution {
public:
    /*
        if you have string of size s than you have (s * (s+1))/2 ->             possible substring

        in this problem we check if concusitive char come than count++; and when  we found different char than add total number of substring into the result
    */
    int countHomogenous(string s) {
        int mod = 1e9+7;
        long long int count=1;
        long long result = 0;
        for(int i=0 ; i<s.size()-1 ; i++){
            if(s[i]==s[i+1]) count++;
            else{
                result = (result+(count * (count+1)/2) ) % mod;
                count=1;
            }
        }

         result = (result + (count * (count + 1)) / 2) % mod;
        return result;
    }
};