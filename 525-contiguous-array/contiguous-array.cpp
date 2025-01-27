class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for (auto& it : nums) {
            if (it == 0)
                it = -1;
        }
        unordered_map<int, int> prefixCount;
        int prefixSum = 0;
        int result = 0;
        prefixCount[0] = -1;
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            if (prefixCount.find(prefixSum) != prefixCount.end()) {
                result = max(result,i - prefixCount[prefixSum]);
            }
            else{
            prefixCount[prefixSum]=i;
            }
        }
        return result;
    }

};