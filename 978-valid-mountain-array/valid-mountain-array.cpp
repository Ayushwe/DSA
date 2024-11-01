class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        
        // Early return if there are fewer than 3 elements
        if (n < 3) return false;
        
        int maxIdx = 0;
        
        // Find the peak (first highest point)
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                maxIdx = i;
                break;
            }
        }
        
        // If no peak was found in the middle, return false
        if (maxIdx == 0) return false;
        
        // Check if left side is strictly increasing
        for (int i = 0; i < maxIdx; i++) {
            if (arr[i] >= arr[i + 1]) return false;
        }
        
        // Check if right side is strictly decreasing
        for (int i = maxIdx; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1]) return false;
        }
        
        return true;  // All conditions met, so it is a valid mountain array
    }
};
