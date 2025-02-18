class Solution {
    public int missingNumber(int[] nums) {
        int arrsum = 0;
        for(int i=0;i<nums.length;i++){
            arrsum += nums[i];
        }
        int sum = 0;
        for(int i=0;i<=nums.length;i++){
            sum += i;
        }
        int ans = sum - arrsum;
        return ans;
    }
}