class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Expected_Sum = n*(n+1)/2;
        int Current_Sum = 0;
        for(int i=0;i<n;i++){
            Current_Sum += nums[i];
        }
        int ans = Expected_Sum - Current_Sum;
        return ans;
    }
};