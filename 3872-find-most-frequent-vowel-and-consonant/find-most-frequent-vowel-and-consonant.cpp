class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(26,0);

        for(auto &it : s){
            int idx = it-'a';
            v[idx]++;
        }
        int cV=0;
        int cC=0;

        for(int i=0 ; i<26 ; i++){
            if(i==0 || i==4 || i==8 || i==14 || i==20){
                cV = max(cV,v[i]);
            }
            else{
                cC = max(cC,v[i]);
            }
        }

        return cC+cV;
    }
};