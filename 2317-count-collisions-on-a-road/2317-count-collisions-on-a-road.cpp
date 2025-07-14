class Solution {
public:
    int countCollisions(string directions) {
        // stack<char> highway; 
        // int collisions = 0;
        
        // for (char car : s) {
        //     if (!highway.empty() && highway.top() == 'R' && car == 'L') {
        //         collisions += 2;
        //         highway.pop();     
        //         highway.push('S'); 
        //     }
        //     else if (!highway.empty() && highway.top() == 'R' && car == 'S') {
        //         collisions += 1;
        //         highway.pop();     
        //         highway.push('S'); 
        //     }
        //     else if (!highway.empty() && highway.top() == 'S' && car == 'L') {
        //         collisions += 1;   
        //     }
        //     else {
        //         highway.push(car);
        //     }
        // }
        
        // while (!highway.empty() && highway.top() == 'R') {
        //     highway.pop();
        // }
        // while (!highway.empty()) {
        //     if (highway.top() == 'R') collisions++;
        //     highway.pop();
        // }
        
        // return collisions;
        int cnt = 0;
        int n = directions.size();
        int i = 0, j = n-1;
        while(i<n && directions[i]=='L'){
            i++;
        }
        while(j>=0 && directions[j]=='R'){
            j--;
        }
        for(int k = i; k<=j; k++){
            if(directions[k]!='S'){
                cnt++;
            }
        }
        return cnt;
    }
};