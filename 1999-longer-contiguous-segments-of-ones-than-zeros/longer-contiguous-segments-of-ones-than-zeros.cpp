class Solution {
public:
    bool checkZeroOnes(string s) {
        int count0=0;
        int count1=0;
        int m_count0=0;
        int m_count1=0;

        for(auto &it : s){
            if(it=='0'){
                count0++;
                count1=0;
            }
            else{
                count1++;
                count0=0;
            }

            m_count1 = max(m_count1,count1);
            m_count0 = max(m_count0,count0);
        }

        return m_count1 > m_count0;

    }
};