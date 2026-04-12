class Solution {
public:
    string reverseWords(string s) {
        bool firstSpace = true;
    string ans;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && firstSpace)
        {
            continue;
        }

        firstSpace = false;
        if (i > 0 && s[i] == ' ' && s[i - 1] == ' ')
            continue;

        ans += s[i];
    }

    if(ans[ans.size()-1]==' ') ans.pop_back();

    reverse(ans.begin(), ans.end());
    ans+=' ';

    int r=0;
    int l=0;
    for (int i = 0; i < ans.size(); i++)
    {   
        if(ans[i]!=' '){
            r++;
            continue;
        }
        reverse(ans.begin()+l , ans.begin()+r);
        l=i+1;
        r=i+1;
    }
        if(ans[ans.size()-1]==' ')ans.pop_back();
        return ans;
    }
};