class MyQueue {
public:
    stack<int> a;
    stack<int> b;

    MyQueue() {}

    void push(int x) {
        int sa = a.size();

        for(int i = 0; i < sa; i++){
            b.push(a.top());
            a.pop();
        }

        a.push(x);

        for(int i = 0; i < sa; i++){
            a.push(b.top());
            b.pop();
        }
    }
    
    int pop() {
        int r = a.top();
        a.pop();
        return r;
    }
    
    int peek() {
        return a.top();
    }
    
    bool empty() {
        return a.empty();
    }
};