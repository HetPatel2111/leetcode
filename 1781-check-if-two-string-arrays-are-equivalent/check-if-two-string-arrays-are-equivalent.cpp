class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1,s2;
        for(auto &it : word1){
            for(auto &it1 : it){
                s1+=it1;
            }
        }

        for(auto &it : word2){
            for(auto &it1 : it){
                s2+=it1;
            }
        }

        return s1==s2;
    }
};