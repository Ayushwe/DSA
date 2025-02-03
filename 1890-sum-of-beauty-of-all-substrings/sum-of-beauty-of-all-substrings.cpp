class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<s.length();j++){
                mpp[s[j]]++;
                int MaxFreq = INT_MIN;
                int MinFreq = INT_MAX;
                for(auto it:mpp){
                    MaxFreq = max(MaxFreq,it.second);
                    MinFreq = min(MinFreq,it.second);
                }
                sum += MaxFreq-MinFreq;
            }
        }
        return sum;
    }
};