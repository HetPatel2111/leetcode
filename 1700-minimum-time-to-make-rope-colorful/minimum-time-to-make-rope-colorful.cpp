class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cost=0;
        int n=colors.size();
        priority_queue<int> pq;
        pq.push(-neededTime[0]);

        for(int i=1 ; i<n ; i++){
            if(colors[i] == colors[i-1]){
                pq.push(-neededTime[i]);
                int min = pq.top();
                pq.pop();

                cost += (-1*min);
            }
            else{
                pq = priority_queue<int>();
                pq.push(-neededTime[i]);
            }
        }

        return cost;
    }
};