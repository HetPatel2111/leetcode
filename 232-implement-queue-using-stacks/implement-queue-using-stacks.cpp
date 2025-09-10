class MyQueue {
public:
    stack<int> s;
    stack<int> s1;
    stack<int> s3;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        int n= s.size();

        
        for(int i=0 ; i<n ; i++){
            s3.push(s.top());
            s.pop();
        }

        int m=s3.size();
        for(int i=0 ; i<m ; i++){
            s1.push(s3.top());
            s3.pop();
        }

        swap(s1,s);
    }
    
    int pop() {
        int y=s.top();
        s.pop();
        return y;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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