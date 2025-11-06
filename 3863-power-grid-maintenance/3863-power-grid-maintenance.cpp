class UnionFind { // usual UnionFind class
    vector<int> root, rank;
public:
    UnionFind(int N) : root(N+1), rank(N+1, 1){// for 1-indexed 
        iota(root.begin(), root.end(), 0);
    }

    int Find(int x) {//Path compression
        return (x == root[x])?x:root[x] = Find(root[x]);
    }

    bool Union(int x, int y) {//Union by rank
        x= Find(x), y= Find(y);
        if (x==y)
            return 0;
        if (rank[x] > rank[y])
            swap(x, y);
        root[x] = y;
        if (rank[x] == rank[y])
            rank[y]++;
        return 1;
    }
};

class Solution {
public:
    static vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        UnionFind G(c);
        for(auto& e: connections){
            G.Union(e[0], e[1]);
        }
        vector<set<int>> comp(c+1);
        for(int i=1; i<=c; i++){
            comp[G.Find(i)].insert(i);
        }
        vector<int> ans;
        for(auto& q: queries){
            const int t=q[0], x=q[1], rx=G.Find(x);
            auto& C=comp[rx];
            if (t==2)
                C.erase(x);
            else{
                if (C.empty()) ans.push_back(-1);
                else if (C.count(x)) ans.push_back(x);
                else ans.push_back(*C.begin());
            }

        }
        return ans;
    }
};