class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // int i=0;
        // int j=cardPoints.size()-1;
        // int res=0;
        // while (true){
        //     if (cardPoints[i]>cardPoints[j]){
        //         res+=cardPoints[i];
        //         i++;
        //     }
        //     else if (cardPoints[i]<cardPoints[j]){
        //         res+=cardPoints[j];
        //         j--;
        //     }
        //     else{
        //         res+=cardPoints[i];
        //         i++;
        //         j--;
        //     }
        //     k--;
        //     if (k==0){
        //         return res;
        //     }
        // }
        // return res;

        // int sum1=0;
        // int sum2=0;
        // for (int i=0;i<k;i++){
        //     sum1+=cardPoints[i];
        // }
        // for (int i=cardPoints.size()-k;i<cardPoints.size();i++){
        //     sum2+=cardPoints[i];
        // }
        // return max(sum1,sum2);
        int n = cardPoints.size();
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);

        int windowSize = n - k;
        int minSubSum = 0;
        for (int i = 0; i < windowSize; ++i) {
            minSubSum += cardPoints[i];
        }

        int currSum = minSubSum;
        for (int i = windowSize; i < n; ++i) {
            currSum += cardPoints[i] - cardPoints[i - windowSize];
            minSubSum = min(minSubSum, currSum);
        }

        return totalSum - minSubSum;
    }
};


