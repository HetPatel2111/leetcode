class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char> s;
        s.push(num[0]);
        string ans;

        int lastIdx=0;
        for(int i=1 ; i<n && k>0 ; i++){
            while (!s.empty() && k>0 && s.top() > num[i]) {
                s.pop();
                k--;
            }
            s.push(num[i]);
            lastIdx = i;   
        }

        // while(!s.empty()){
        //     ans+=s.top();
        //     s.pop();
        // }

        for (int j = lastIdx + 1; j < n; j++) {
            s.push(num[j]);
        }

        while (k > 0 && !s.empty()) {
            s.pop();
            k--;
        }

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        int start=0;
        while (start < ans.size() && ans[start] == '0') start++;
        ans = ans.substr(start);


        if(ans.size()==0) return "0";
        return ans;
    }
};