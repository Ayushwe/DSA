class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mpp;
        int count=0;
        int start=0;
        int end=0;
        int n=s.length();
        while(end<n){
            mpp[s[end]]++;
            while(mpp['a'] && mpp['b'] && mpp['c']){
                count += n-end;
                mpp[s[start]]--;
                start++;
            }
            end++;
        }
        return count;
    }
};