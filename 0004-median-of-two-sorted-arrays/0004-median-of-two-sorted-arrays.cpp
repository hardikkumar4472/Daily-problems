class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        double med=0;
        for (int i=0;i<nums1.size();i++){
            res.push_back(nums1[i]);
        }
        for (int i=0;i<nums2.size();i++){
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        if (res.size() % 2 == 0) {
        med= (res[res.size() / 2 - 1] + res[res.size() / 2]) / 2.0;
    }
        else{
            med=res[res.size()/2];
        }
        return med;
    }
};