class CustomStack {
public:
    vector<int> st;
    int currentSize = 0;
    int maxSize = 0;
    CustomStack(int maxSize) { this->maxSize = maxSize; }

    void push(int x) {
        if (currentSize == maxSize)
            return;
        currentSize++;
        st.push_back(x);
    }

    int pop() {
        if (currentSize == 0)
            return -1;
        int value = st[currentSize - 1];
        st.erase(st.begin() + currentSize);
        currentSize--;
        return value;
    }

    void increment(int k, int val) {
        if (currentSize <= k) {
            for (int& ele : st) {
                ele += val;
            }
        } else {
            for (int i = 0; i < k; i++) {
                st[i] += val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */