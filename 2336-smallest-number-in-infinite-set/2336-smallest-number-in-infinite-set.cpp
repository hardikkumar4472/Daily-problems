class SmallestInfiniteSet {
public:
    int curr;
    set<int> s;
    SmallestInfiniteSet() {
        curr = 1;
    }
    int popSmallest() {
        if (!s.empty()) {
            int x = *s.begin();
            s.erase(s.begin());
            return x;
        }
        return curr++;
    }
    void addBack(int num) {
        if (num < curr)
            s.insert(num);
    }
};