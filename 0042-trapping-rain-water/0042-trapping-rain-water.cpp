class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int lm=0;
        int rm=0;
        int tw=0;
        while (i<j){
            lm=max(lm,height[i]);
            rm=max(rm,height[j]);
            if (lm<rm){
                tw+=(lm-height[i]);
                i++;
            }
            else{
                tw+=(rm-height[j]);
                j--;
            }
        }
        return tw;
        
    }
};