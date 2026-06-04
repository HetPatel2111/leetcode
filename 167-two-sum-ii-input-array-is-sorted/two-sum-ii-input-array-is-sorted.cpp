class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int h=n-1;

        while(l<h){
            if(numbers[l] + numbers[h] == target) return {l+1,h+1};

            if(numbers[l] + numbers[h] > target) h--;
            else l++;
        }

        return {-1,-1};
    }
};