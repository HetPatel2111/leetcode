class Solution {
public:
    string sortVowels(string s) {
        string vovels;
        int n=s.size();
        for(int i=0 ; i<n ; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vovels +=s[i];
            }
       }

       sort(vovels.begin(),vovels.end());

       int m=vovels.size();
        int j=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=vovels[j];
                j++;
            }

            if(j==m) break;
        } 

        return s;
    }
};