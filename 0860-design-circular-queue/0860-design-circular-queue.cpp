class MyCircularQueue {
public:
    vector<int>v;
    int temp=0;
    MyCircularQueue(int k) {
        temp=k;
    }
    
    bool enQueue(int value) {
        if(!isFull()){
v.push_back(value);
        return true;
        }
        
        return false;
    }
    
    bool deQueue() {
        if(!isEmpty()){
            for(int i=1;i<v.size();i++){
            v[i-1]=v[i];
        }
        v.pop_back();
        return true;
        }else{
        return false;
        }
     return false;
    }
    
    int Front() {
        if(!isEmpty())
        return v[0];
        else
        return -1;
    }
    
    int Rear() {
        if(!isEmpty()){
            int l=v.size()-1;
            return v[l];
        }else{
            return -1;
        }   
    }
    
    bool isEmpty() {
        if(v.size()==0)
        return true;
        else
        return false;
    }
    
    bool isFull() {
        if(v.size()==temp)
        return true;
        else
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */