class Solution {
public:
    string predictPartyVictory(string senate) {
        deque<int> qR, qD;
        int n = senate.size();
        
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                qR.push_back(i);
            else
                qD.push_back(i);
        }

        while (!qR.empty() && !qD.empty()) {
            int r = qR.front();
            int d = qD.front();
            qR.pop_front();
            qD.pop_front();
            if (r < d)
                qR.push_back(r + n);
            else
                qD.push_back(d + n);  
        }
        return qR.empty() ? "Dire" : "Radiant";
    }
};
