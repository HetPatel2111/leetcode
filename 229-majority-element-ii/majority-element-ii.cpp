class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0;
        int c2=0;
        int e1=-1;
        int e2=-1;

        for(auto &it : nums){
            if(it==e1) c1++;
            else if(it==e2) c2++;
            else if(c1==0){
                c1++;
                e1=it;
            }
            else if(c2==0){
                c2++;
                e2=it;
            }
            else{
                c1--;
                c2--;
            }
        }

        c1=0;
        c2=0;

        for(auto &it : nums){
            if(it==e1) c1++;
            if(it==e2) c2++;
        }

        vector<int> ans;
        if(c1>n/3) ans.push_back(e1);
        if(c2>n/3) ans.push_back(e2);

        if(e1==e2) ans.pop_back();

        return ans;
    }
};