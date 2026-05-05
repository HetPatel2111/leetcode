class Solution {
public:
    int sumOfDigit(int n){
        int sum=0;
        while(n>0){
            int digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;

        do{
            slow = sumOfDigit(slow);
            fast =sumOfDigit(sumOfDigit(fast));
        }while(slow!=fast);

        if(slow==1) return true;
        return false;
    }
};