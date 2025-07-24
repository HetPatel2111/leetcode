class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> negative;
        vector<int> positive;
        vector<int> ans;
        for(auto it : nums){
            if(it<0) negative.push_back(it);
            else positive.push_back(it);
        }

        int j=0;
        int k=0;
        for(int i=0 ; i<nums.size() ; i++){
            if(i%2){
                ans.push_back(negative[j]);
                j++;
            }
            else{
                //int k=0;
                ans.push_back(positive[k]);
                k++;
            }
        }

        return ans;
    }
};