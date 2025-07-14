class Solution {
public:
    int countCollisions(string s) {
        stack<char> highway; 
        int collisions = 0;
        
        for (char car : s) {
            if (!highway.empty() && highway.top() == 'R' && car == 'L') {
                collisions += 2;
                highway.pop();     
                highway.push('S'); 
            }
            else if (!highway.empty() && highway.top() == 'R' && car == 'S') {
                collisions += 1;
                highway.pop();     
                highway.push('S'); 
            }
            else if (!highway.empty() && highway.top() == 'S' && car == 'L') {
                collisions += 1;   
            }
            else {
                highway.push(car);
            }
        }
        
        while (!highway.empty() && highway.top() == 'R') {
            highway.pop();
        }
        while (!highway.empty()) {
            if (highway.top() == 'R') collisions++;
            highway.pop();
        }
        
        return collisions;
    }
};