class ProductOfNumbers {
public:
    vector<int> vec;
    int size=0;
    ProductOfNumbers() {
        vec.push_back(1);
        size=0;
    }
    
    void add(int num) {
        if (num == 0){
            vec={1};
            size=0;
        } else {
            vec.push_back(vec[size]*num);
            size++;
        }
    }
    
    int getProduct(int k) {
        if (k>size){
            return 0;
        }
        return vec[size]/vec[size-k]; 
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */