class Solution {
public:
    int GCD(int a ,int b){
        if(b==0) return a;
        return GCD(b,a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        string s=str1+str2;
        string s1=str2+str1;
    
        if(s!=s1) return "";

        int n=str1.size();
        int m=str2.size();

        int idx = GCD(max(n,m),min(n,m));

        return str1.substr(0,idx);
    }
};