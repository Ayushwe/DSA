class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0){
            return 0;
        }
        int maxi = INT_MIN;
        int start = 0;
        int end = 0;
        unordered_map<char,int>mpp;
        while(end<s.length()){
            mpp[s[end]]++;
            while(mpp[s[end]]>1){
                mpp[s[start]]--;
                start++;
            }
            int currLen = end-start+1;
            maxi = max(maxi,currLen);
            end++;
        }
        return maxi;
    }
};