class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> ans(26,0);
        vector<string> temp;

        for(int i=0 ; i<words[0].size() ; i++){
            ans[words[0][i]-'a']++;
        }

        int j=0;

        for(int i=1 ; i<words.size() ; i++){
            vector<int> freq(26,0);

            for(int k=0 ; k<words[i].size() ; k++){
                char ch = words[i][k];
                freq[ch-'a']++;
            }

            for(int i=0 ; i<26 ; i++){
                ans[i] = min(ans[i],freq[i]);
            }
        }

        vector<string> f;

        for(int i=0 ; i<26 ; i++){
            while(ans[i]>0){
                string b(1,i+'a');
                f.push_back(b);
                ans[i]--;
            }
        }

        return f;
    }
};