class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        long long int ans=2;
        int i=2;
        while(ans<=n){
            if((int)ans==n) return true;
            ans *= 2;
        }
        return false;
    }
};