const int mod=1e9+7;
using int2=pair<unsigned long long, int>;
vector<int2> adj[200];
class Solution {
public:
    unsigned long long dijkstra(int start, int n, unsigned long long* dist){
        unsigned long long way[n];
        memset(way, 0, sizeof(way));
        priority_queue<int2, vector<int2>, greater<int2>> pq;
        pq.emplace(0, start);
        dist[start]=0;
        way[start]=1;
        while(!pq.empty()){
            auto [d0, i]=pq.top();
            pq.pop();
            for(auto [d2, j]:adj[i]){
                unsigned long long newD=d0+d2;
                if (newD<dist[j]){// path thru i, j
                    dist[j]=newD;
                    way[j]=way[i];
                    pq.emplace(newD, j);
                }
                else if( newD==dist[j]){
                    way[j]+=way[i]; // paths thru i & not thru i
                    way[j]%=mod;
                }
            }
        }
        return way[n-1];
    }
    int countPaths(int n, vector<vector<int>>& roads) {
        for(int i=0; i<n; i++)
            adj[i].clear();
            
        for (auto& e: roads){
            int u=e[0], v=e[1];
            unsigned long long time=e[2];
            adj[u].emplace_back(time, v);
            adj[v].emplace_back(time, u);
        }
        unsigned long long dist[200];
        fill(dist, dist+n, ULLONG_MAX);
        return dijkstra(0, n, dist);
    }
};