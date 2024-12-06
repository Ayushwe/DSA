class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (mpp.find(temp) != mpp.end()) {
                ans.push_back(mpp[temp]);
                ans.push_back(i);
            }
            mpp[nums[i]]=i;
        }

        return ans;
    }
};