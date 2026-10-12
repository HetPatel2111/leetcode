class MyStack {
public:
    queue<int> q;
    queue<int> temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }
        swap(q,temp);
    }
    
    int pop() {
        int ele = q.front();
        q.pop();
        return ele;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */