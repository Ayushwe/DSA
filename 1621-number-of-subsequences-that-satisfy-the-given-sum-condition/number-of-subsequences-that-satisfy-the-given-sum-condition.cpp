class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
         sort(nums.begin(), nums.end());
        int n = nums.size();
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int i = 0;
        int j = n - 1;  

        vector<long long> powers(n);
        powers[0] = 1;
        for (int k = 1; k < n; ++k) {
            powers[k] = (powers[k - 1] * 2) % MOD;
        }

        while (i <= j) {
            if (nums[i] + nums[j] <= target) {
                ans = (ans + powers[j - i]) % MOD;
                i++;
            } else {
                j--;
            }
        }

        return ans;
    }
};