class Solution {
public:
    int mirrorDistance(int n) {
        int size=0;
        int temp=n;

        while(temp>0){
            size++;
            temp/=10;
        }

        long long ans=0;
        int n1=size;
        temp=n;
        while(n1--){
            int rem = temp%10;
            temp/=10;
            size--;
            ans+=pow(10,size)*rem;
            
        }

        return abs(n-ans);
    }
};