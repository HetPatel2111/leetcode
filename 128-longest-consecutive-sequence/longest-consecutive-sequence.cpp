class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int count=0;
        int maxcount=0;
        set<int> s;
         for(int i=0 ; i<nums.size() ; i++){
             s.insert(nums[i]);
         }

         vector<int> v(s.begin(),s.end());
        
        //sort(nums.begin(),nums.end());

        for(int i=0 ; i<v.size()-1; i++){
            if(v[i]+1 == v[i+1]){
                count++;
            }
            else{
                maxcount = max(count,maxcount);
                count=0;
            }
        }

        maxcount = max(maxcount,count);

        if(maxcount == 0 && !v.empty()) return 1;
        return maxcount+1;
    }
};