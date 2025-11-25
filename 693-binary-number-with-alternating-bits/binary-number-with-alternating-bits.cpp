class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool alternate = true;
        int i=0;
        while(n>0){
            if(n%2){
                if(i==0) i++;

                if(alternate==false) return false;
                alternate=false;
            }
            else{
                if(i==0){
                    alternate=false;
                    i++;
                }
                if(alternate==true) return false;
                alternate=true;
            }
            n/=2;
        }

        return true;
    }
};