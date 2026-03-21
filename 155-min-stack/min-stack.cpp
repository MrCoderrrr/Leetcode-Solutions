class MinStack {
public:
    MinStack() {
        
    }
    stack<pair<int,int>> a;
    void push(int val) {
        pair<int,int> x;
        if(!a.empty()){
            x = a.top();
        }
        else{
            x = {0,INT_MAX};
        }
        a.push({val,min(x.second,val)});
    }
    
    void pop() {
        a.pop();
    }
    
    int top() {
        pair<int,int> abc = a.top();
        return abc.first;
    }
    
    int getMin() {
        pair<int,int> abc = a.top();
        return abc.second;
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