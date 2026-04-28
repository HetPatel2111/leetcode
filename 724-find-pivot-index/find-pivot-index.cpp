class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1 && nums[0]!=0) return 0;
        // if(n==1 && nums[0]==0) return 0;
        int sum=0;
        vector<int> post(n);

        for(int i=n-1 ; i>=0 ; i--){
            sum+=nums[i];
            post[i]=sum;
        }

        sum=0;

        for(int i=0 ; i<n-1 ; i++){
            if(sum==post[i+1]) return i;
            sum+=nums[i];
        }

        if(sum==0) return n-1;

        return -1;
    }
};