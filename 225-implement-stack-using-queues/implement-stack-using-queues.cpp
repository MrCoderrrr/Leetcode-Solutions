class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    void push(int x) {
        int len = q.size();
        q.push(x);
        for(int i = 0; i<len ; i++){
            int fro = q.front();
            q.pop();
            q.push(fro);
        }
    }
    
    int pop() {
        int popped = q.front();
        q.pop();
        return popped;
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