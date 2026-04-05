class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> meanHeap;

        for(auto &it : nums){
            meanHeap.push(it);

            if(meanHeap.size() > k){
                meanHeap.pop();
            }
        }

        return meanHeap.top();
    }
};