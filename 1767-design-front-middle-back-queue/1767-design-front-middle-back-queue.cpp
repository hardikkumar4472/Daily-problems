class FrontMiddleBackQueue {
public:
    vector<int>ans;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        ans.insert(ans.begin(),val);
    }
    
    void pushMiddle(int val) {
        ans.insert(ans.begin()+(ans.size()/2),val);
    }
    
    void pushBack(int val) {
        ans.push_back(val);
    }
    
    int popFront() {
        if(ans.size()==0) return -1;
         int val=ans[0];
        ans.erase(ans.begin());
        return val;
    }
    
    int popMiddle() {
        if(ans.size()==0) return -1;
        int val=ans[(ans.size()-1)/2];
        ans.erase(ans.begin()+(ans.size()-1)/2);
        return val;
    }
    
    int popBack() {
        if(ans.size()==0) return -1;
        int val=ans[ans.size()-1];
        ans.pop_back();
        return val;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */