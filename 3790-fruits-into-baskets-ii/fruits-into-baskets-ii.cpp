class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count=0;
        for(auto &it : fruits){
            for(int j=0 ; j<baskets.size() ; j++){
                if(it <= baskets[j]){
                    baskets[j]=-99;
                    count++;
                    break;
                }
            }
        }

        return fruits.size()-count;
    }
};