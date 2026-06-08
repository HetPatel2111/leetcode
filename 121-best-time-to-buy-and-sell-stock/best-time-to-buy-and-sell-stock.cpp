class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minEle = prices[0];
        int maxProfit=0;

        for(auto &it : prices){
            if(it < minEle) minEle = it;

            maxProfit = max(maxProfit , it-minEle);
        }

        return maxProfit;
    }
};