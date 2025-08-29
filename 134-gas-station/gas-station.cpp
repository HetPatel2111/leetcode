class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumGas=0;
        int sumCost=0;

        for(auto &it :gas) sumGas+=it;
        for(auto &it : cost) sumCost+=it;

        if(sumCost > sumGas) return -1;

        int sum=0;
        int j=0;
        int i;
        for(i=0 ; i<gas.size() ; i++){
            sum += gas[i] - cost[i];
            if(sum < 0){
                j=i+1;
                sum=0;
            }
        }

        return j;
    }
};