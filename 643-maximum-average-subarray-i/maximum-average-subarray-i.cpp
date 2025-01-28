class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         // Edge case: If nums size is less than k, return the average of the entire array
        if (nums.size() < k) {
            double totalSum = 0;
            for (int num : nums) {
                totalSum += num;
            }
            return totalSum / nums.size();
        }
        
        // Calculate prefix sums
        vector<double> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        
        double ans = prefix[k - 1] / k;  // First subarray of length k
        for (int i = k; i < nums.size(); i++) {
            double subarraySum = prefix[i] - prefix[i - k];
            ans = max(ans, subarraySum / k);
        }
        
        return ans;
    }
};