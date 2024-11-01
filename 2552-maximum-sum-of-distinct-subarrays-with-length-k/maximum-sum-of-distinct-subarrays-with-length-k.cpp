#include <vector>
#include <set>
#include <algorithm>

class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        long long MaxSum = 0;
        long long WindowSum = 0;
        std::set<int> windowSet;

        int left = 0;  // Start of the sliding window

        for (int right = 0; right < nums.size(); ++right) {
            // If duplicate found, slide the left end to remove duplicates
            while (windowSet.count(nums[right]) > 0) {
                windowSet.erase(nums[left]);
                WindowSum -= nums[left];
                ++left;
            }

            // Add the current element to the window
            windowSet.insert(nums[right]);
            WindowSum += nums[right];

            // Check if we have a valid window of size `k`
            if (right - left + 1 == k) {
                MaxSum = std::max(MaxSum, WindowSum);

                // Slide the window by removing the element at `left`
                windowSet.erase(nums[left]);
                WindowSum -= nums[left];
                ++left;
            }
        }

        return MaxSum;
    }
};
