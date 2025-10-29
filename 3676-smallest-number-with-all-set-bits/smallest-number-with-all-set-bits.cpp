class Solution {
public:
    int smallestNumber(int n) {
        if(n>511) return 1023;

        if(n==1) return 1;
        if(n>=2 && n<=3) return 3;
        if(n>=4 && n<=7) return 7;
        if(n>=8 && n<=15) return 15;
        if(n>=16 && n<=32) return 31;
        if(n>=33 && n<=63) return 63;
        if(n>=64 && n<=127) return 127;
        if(n>=128 && n<=255) return 255;
        
        return 511;
    }
};