class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>> m;

         for(int i=0 ; i<v.size() ; i++){
        if(m.size() < k){
            m.push(v[i]);
            continue;
        }
        if(v[i] > m.top()){
            m.pop();
            m.push(v[i]);
        }    
    }
    

        return m.top();
    }
};