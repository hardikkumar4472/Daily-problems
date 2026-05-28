class MinStack {
public:
    stack<int> s;
    MinStack() {}
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        if (!s.empty()){
            s.pop();
        }
    }
    
    int top() {
        if (!s.empty()){
            return s.top();
        }
        return -1;
    }
    
    int getMin() {
        stack<int> temp=s;
        vector<int> v;
        while (!temp.empty()){
            v.push_back(temp.top());
            temp.pop();
        }
        sort(v.begin(),v.end());
        return v[0];
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