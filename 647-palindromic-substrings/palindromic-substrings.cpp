class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n=s.size();

        for(int i=0 ; i<n ; i++){
            string temp;
            for(int j=i ; j<n ; j++){
                temp+=s[j];
                string temp1 = temp;
                reverse(temp1.begin(),temp1.end());
                if(temp1==temp) count++;
            }
        }

        return count;
    }
};