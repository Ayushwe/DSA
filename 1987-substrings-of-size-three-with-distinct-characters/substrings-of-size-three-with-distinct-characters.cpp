class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        unordered_map<char, int> mpp;
        
        // First, iterate through the first window of size 3
        for (int i = 0; i < 3; i++) {
            mpp[s[i]]++;
        }
        
        // Check the first window if it's a good substring
        if (mpp.size() == 3) {
            count++;
        }
        
        // Start sliding window
        int StartIndex = 0;
        int EndIndex = 3;
        
        while (EndIndex < s.length()) {
            // Remove the start element of the previous window
            mpp[s[StartIndex]]--;
            if (mpp[s[StartIndex]] == 0) {
                mpp.erase(s[StartIndex]); // Clean up the map to maintain unique characters
            }
            StartIndex++;
            
            // Add the new element to the current window
            mpp[s[EndIndex]]++;
            EndIndex++;
            // Check if the current window is a good substring
            if (mpp.size() == 3) {
                count++;
            }
            
            
        }
        
        return count;
    }
};