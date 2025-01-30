class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int CurLength = 0;
        int MaxLength = 0;
        int start=0;
        int end=0;
        unordered_map<char,int>mpp;
        while(end<s.length()){
            mpp[s[end]]++;
            while(mpp[s[end]] > 1){
                mpp[s[start]]--;
                start++;
            }
            CurLength = end-start+1;
            MaxLength = max(MaxLength,CurLength);
            end++;
        }
        return MaxLength;
    }
};