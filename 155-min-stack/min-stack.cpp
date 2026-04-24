class MinStack {
public:
    stack<int> st;
    stack<int> m_st;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);

        if(m_st.empty()) m_st.push(val);
        else{
            if(val <= m_st.top()) m_st.push(val);
        }
    }
    
    void pop() {
        if(st.top() == m_st.top()){
            m_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m_st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */