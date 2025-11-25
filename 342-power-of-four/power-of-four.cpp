class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        long long int ans=4;
        while(ans<=n){
            if((int)ans==n) return true;
            ans *= 4;
        }
        return false;
    }
};