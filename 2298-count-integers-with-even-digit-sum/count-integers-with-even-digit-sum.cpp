class Solution {
public:
    bool isEven(int n){
        int sum=0;
        int temp=n;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }

        if(sum%2) return false;
        return true;
    }
    int countEven(int num) {
        int count=0;
        for(int i=2 ; i<=num ; i++){
            if(isEven(i)) count++;
        }

        return count;
    }
};