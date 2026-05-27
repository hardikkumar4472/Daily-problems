class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for (int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int temp=k;
        while (temp!=1){
            pq.pop();
            temp--;
        }
        // pq.pop();
        return pq.top();
    }
};