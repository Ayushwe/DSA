class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi = 0;
        int ans=0;
        unordered_map<char,int>mpp;
        int start=0;
        int end=0;
        while(end<s.length()){
            mpp[s[end]]++;
            maxi = max(maxi,mpp[s[end]]);
            int windowLength = end-start+1;
            if(windowLength-maxi>k){
                mpp[s[start]]--;
                start++;
            }
            windowLength = end-start+1;
            ans = max(ans,windowLength);
            end++;
        }
        return ans;
    }
};