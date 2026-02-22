class Solution {
public:

    bool isDigitorialPermutation(int n) {
        int fact7 = 720*7;
        int fact8  = fact7*8;
        int fact9= fact8*9;
        vector<int> f = {1,1,2,6,24,120,720,fact7,fact8,fact9};

        int sum=0;
        int temp=n;
        while(temp>0){
            int rem = temp%10;
            temp/=10;
            sum+=f[rem];
        }

        string original = to_string(n);
        string candidate = to_string(sum);

        sort(original.begin(), original.end());
        sort(candidate.begin(), candidate.end());

        return (original == candidate);
    }
};