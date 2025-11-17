class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int ptr1;
        int ptr2=0;
        bool flag=true;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==1){
                ptr1=i;

                if(ptr2==0 && flag) {
                    flag=false;
                    ptr2=ptr1;
                    continue;
                }    
                else{
                    if(ptr1-ptr2 <= k){
                        return false;
                    }
                    else{
                        ptr2=ptr1;
                    }
                }
            }
        }

        return true;
    }
};