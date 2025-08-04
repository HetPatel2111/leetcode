class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> u;

        for(auto &it : s) u[it]++;

        priority_queue<pair<int,char>> maxHeap;

        for(auto& [ch,f] : u){
            maxHeap.push({f,ch});
        }

        string result;

        while(!maxHeap.empty()){
            auto [f,ch] = maxHeap.top();
            maxHeap.pop();
            result += string(f,ch);
            // string(count,char) mean count times char add
            // string(5,'a') -> aaaaa
        }

        return result;
    }
};