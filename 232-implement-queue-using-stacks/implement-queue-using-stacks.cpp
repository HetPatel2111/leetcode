class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    stack<int> st3;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()){
            st3.push(st1.top());
            st1.pop();
        }
        st3.push(x);

        while(!st3.empty()){
            st2.push(st3.top());
            st3.pop();
        }
        swap(st1,st2);
    }
    
    int pop() {
        int y=st1.top();
        st1.pop();
        return y;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        if(st1.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */