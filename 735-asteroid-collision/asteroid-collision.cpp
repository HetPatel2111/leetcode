class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        stack<int> st;

        for(int i=n-1 ; i>=0 ; i--){
            if(asteroids[i] < 0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top()<0 && asteroids[i] > abs(st.top())){
                    st.pop();
                }

                if(!st.empty() && st.top()<0 && asteroids[i]==abs(st.top())) st.pop();
                else if(st.empty() || st.top()>0) st.push(asteroids[i]);
            }
        }

        int m=st.size();
        vector<int> ans(m);

        for(int i=0 ; i<m ; i++){
            ans[i]=st.top();
            st.pop();
        }

        return ans;
    }
};