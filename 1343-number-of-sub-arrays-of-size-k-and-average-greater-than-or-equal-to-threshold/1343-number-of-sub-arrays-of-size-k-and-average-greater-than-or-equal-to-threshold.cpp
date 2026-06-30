class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int winsum=0;
        int ans=0;
        for(int i=0;i<k;i++){
            winsum+=arr[i];
        }
        if(threshold*k<=winsum){
            ans++;
        }
        for (int i=k;i<arr.size();i++){
            winsum+=arr[i];
            winsum-=arr[i-k];       
            if(winsum>=threshold*k){
                ans++;
            }     
        }
        return ans;
    }
};