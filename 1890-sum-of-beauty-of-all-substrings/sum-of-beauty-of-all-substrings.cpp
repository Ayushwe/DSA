class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            unordered_map<int,int>mpp;
            for(int j=i;j<s.length();j++){
                mpp[s[j]]++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                for(auto it : mpp){
                    mini = min(mini,it.second);
                    maxi = max(maxi,it.second);
                }
                sum = sum +(maxi - mini);
            }
        }
        return sum;
    }
};