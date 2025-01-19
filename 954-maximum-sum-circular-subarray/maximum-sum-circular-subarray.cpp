class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
          int n = nums.size();

        // Step 1: Calculate Non-Circular Maximum Subarray Sum (Kadane's Algorithm)
        int currentMax = 0, globalMax = INT_MIN;
        for (int num : nums) {
            currentMax = max(num, currentMax + num);
            globalMax = max(globalMax, currentMax);
        }

        // Step 2: Calculate Minimum Subarray Sum (for Circular Handling)
        int currentMin = 0, globalMin = INT_MAX, totalSum = 0;
        for (int num : nums) {
            currentMin = min(num, currentMin + num);
            globalMin = min(globalMin, currentMin);
            totalSum += num;
        }

        // Step 3: Handle Circular Nature
        // If all elements are negative, return the maximum single element
        if (globalMax < 0) return globalMax;

        // Otherwise, return the maximum of Non-Circular and Circular Max
        return max(globalMax, totalSum - globalMin);
    }
};