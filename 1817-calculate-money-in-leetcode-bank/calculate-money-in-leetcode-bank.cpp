class Solution {
public:

    int remaingSum(int n , int start){
        int sum=0;
        int st=start;

        for(int i=0 ; i<n ; i++){
            sum+=st;
            st++;
        }

        return sum;
    }

    int totalMoney(int n) {
        if(n<=7){
            return remaingSum(n,1);
        }

        int start=1;
        int end=7;
        int sum=28;
        int prevSum = sum;
        int size = n/7;
        size--;   // we have sum of first 7 days;

        while(size--){
            end++;
            int currentSum = prevSum+end-start;
            prevSum = currentSum;
            sum = sum + currentSum ;
            start++;
        }
        

        int leftSize = n%7;
        sum += remaingSum(leftSize,start+1);

        return sum;
    }
};