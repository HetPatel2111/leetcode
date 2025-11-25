class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        long long int ans=3;
        int i=2;
        while(ans<=n){
            if((int)ans==n) return true;
            ans *= 3;
        }
        return false;
    }
};