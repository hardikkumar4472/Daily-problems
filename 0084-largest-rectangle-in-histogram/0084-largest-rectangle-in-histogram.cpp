class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int maxArea = 0;
        int n = heights.size();
        for (int i = 0; i <= n; i++) {
            int currHeight = (i == n) ? 0 : heights[i];
            while (!s.empty() && currHeight < heights[s.top()]) {
                int h = heights[s.top()];
                s.pop();
                int width;
                if (s.empty())
                    width = i;
                else
                    width = i - s.top() - 1;
                maxArea = max(maxArea, h * width);
            }
            s.push(i);
        }
        return maxArea;
    }
};
