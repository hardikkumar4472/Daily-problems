class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        vector<int> area;
        while (start < end){
            area.push_back((end-start)*(min(height[end],height[start])));
            if (height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        sort(area.begin(),area.end());
        return area[area.size()-1];
    }
};