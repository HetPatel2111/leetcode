class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        int temp=x;
        int count=0;
        while(temp>0){
            count++;
            temp/=10;
        }
        
        temp=x;
        long long sum=0;
        while(temp>0){
            int mod = temp%10;
            temp/=10;
            count--;
            sum+=(long long)mod*pow(10,count);
        }

        if(sum==x)return true;
        return false;
    }
};