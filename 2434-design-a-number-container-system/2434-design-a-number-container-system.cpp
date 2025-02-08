class NumberContainers {
public:
    unordered_map<long, priority_queue<long, vector<long>,greater<long>>> mp;
    unordered_map<long,long> ind;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        ind[index]=number;
        mp[number].push(index);
    }
    
    int find(int number) {
        while (!mp[number].empty()){
            int minIndex=mp[number].top();
            if (ind[minIndex]==number){
                return minIndex;
            }
            mp[number].pop();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */