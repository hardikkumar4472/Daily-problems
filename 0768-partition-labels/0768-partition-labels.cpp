class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>highest_freq(26,0);
        int index=0;
        for(auto i:s){
            int c=i-'a';
            highest_freq[c]=max(highest_freq[c],index);
            index++;
        }
       
        vector<int>ans;
        int maxi=-1;
        for(int i=0;i<s.size();i++){
            if(maxi==-1){
                int st=i;
                maxi=max(maxi,highest_freq[s[i]-'a']);
                while(i<s.size() && i!=maxi){
                    i++;
                    maxi=max(maxi,highest_freq[s[i]-'a']);

                }
                maxi=-1;
                ans.push_back(i-st+1);
            }
        }
        return ans;
        
    }
};