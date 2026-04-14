class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> u;

        for(auto &it : s) u[it]++;

        priority_queue<pair<int,char>> pq;

        for(auto&[ch,f] : u){
            pq.push({f,ch});
        }

        string ans;

        while(!pq.empty()){
            auto [num,ch] = pq.top();
            pq.pop();

            ans+=string(num,ch);
        }

        return ans;

    }
};