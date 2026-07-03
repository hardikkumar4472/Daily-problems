class MinStack {
    vector<pair<int, int>> st;

public:
    MinStack() {
    }

    void push(int value) {
        if (st.empty())
            st.push_back(make_pair(value, value));
        else
            st.push_back(make_pair(value, min(value, st.back().second)));
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
        return st.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */