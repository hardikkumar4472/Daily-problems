class Solution {
public:
    bool canBeValid(string s, string locked) {
        int length = s.size();
        if (length % 2 == 1) {
            return false;
        }

        stack<int> openBrackets, unlocked;
        for (int i = 0; i < length; i++) {
            if (locked[i] == '0') {
                unlocked.push(i);
            } else if (s[i] == '(') {
                openBrackets.push(i);
            } else if (s[i] == ')') {
                if (!openBrackets.empty()) {
                    openBrackets.pop();
                } else if (!unlocked.empty()) {
                    unlocked.pop();
                } else {
                    return false;
                }
            }
        }

        while (!openBrackets.empty() && !unlocked.empty() &&
               openBrackets.top() < unlocked.top()) {
            openBrackets.pop();
            unlocked.pop();
        }

        if (!openBrackets.empty()) {
            return false;
        }

        return true;
    }
};