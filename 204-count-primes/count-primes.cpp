class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        vector<int> v(n,true);
        v[0]=false;
        v[1]=false;
        int count=0;

        for(int i=2 ; i*i<n ; i++){
            if(v[i]==true){
                for(long long j=i*i ; j<n ; j+=i){
                    v[j]=false;
                }
            }
        }

        for(auto &it : v){
            if(it==true) count++;
        }

        return count;
    }
};