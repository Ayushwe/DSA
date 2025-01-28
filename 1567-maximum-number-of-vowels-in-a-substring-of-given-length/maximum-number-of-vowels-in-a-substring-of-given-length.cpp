class Solution {
public:
    int maxVowels(string s, int k) {
        int windowVowel = 0, maxCount = 0;
        unordered_map<char, int> m;
        m['a']++, m['e']++, m['i']++, m['o']++, m['u']++;

        // Initialize the first window
        for (int i = 0; i < k; i++) {
            if (m.contains(s[i])) {
                windowVowel++;
            }
        }
        maxCount = windowVowel;

        // Sliding window
        int StartIndex = 0;
        int EndIndex = k;
        while (EndIndex < s.length()) {
            // Remove the count of the character leaving the window
            if (m.contains(s[StartIndex])) {
                windowVowel--;
            }
            StartIndex++;

            // Add the count of the character entering the window
            if (m.contains(s[EndIndex])) {
                windowVowel++;
            }
            EndIndex++;

            // Update the maximum count
            maxCount = max(maxCount, windowVowel);
        }
        return maxCount;
    }
};

