class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int> q;
        vector<int> vis(n, 0);
        q.push(0);
        vis[0] = 1;
        int count = 0;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            count++; 
            for (int key : rooms[curr]) {
                if (!vis[key]) {
                    vis[key] = 1;
                    q.push(key);
                }
            }
        }
        return count == n;
    }
};