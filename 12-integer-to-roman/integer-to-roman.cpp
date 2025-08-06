class Solution {
public:
    string intToRoman(int num) {
        vector<int> roman = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> ch ={"M","CM","D","CD","C","XC","L","XL","X","IX","V", "IV","I"};

        string ans;

        for(int i=0 ; i<roman.size() ; i++){
            while(num>=roman[i]){
                num -= roman[i];
                ans+=ch[i];
            }
        }

        return ans;
    }
};