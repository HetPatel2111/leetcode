class MinStack {
public:
    stack<int> s;
    stack<int> minStack;
    MinStack() {
    }
    
    void push(int val) {
        if(minStack.empty() || val <= minStack.top()) minStack.push(val);
        s.push(val);
    }
    
    void pop() {
        int y=s.top();
        s.pop();
        if(y == minStack.top()) minStack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
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