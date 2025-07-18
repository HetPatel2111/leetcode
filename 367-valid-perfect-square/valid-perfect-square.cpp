class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0;
        int h=num;

        while(l<=h){
            int mid = l + (h-l)/2;

            if((long long)mid*mid==num) return true;

            if((long long)mid*mid < num) l=mid+1;
            else h=mid-1; 
        }

        return false;
    }

};