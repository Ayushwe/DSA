
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        if (nums == null) {
            throw new IllegalArgumentException("Input array is null");
        }

        int curCount = 0;
        int maxCount = 0;

        for (int n : nums) {
            if (n == 1) {
                curCount++;
                maxCount = Math.max(maxCount, curCount);
            } else {
                curCount = 0;
            }
        }

        return maxCount;
    }
}