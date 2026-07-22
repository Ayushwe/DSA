class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int minLength = Integer.MAX_VALUE;
        int start = 0;
        int end = 0;
        int sum = 0;
        while(end< nums.length){
            sum+= nums[end];
            end++;
            while(sum >= target){
                int len = end-start;
                minLength = Math.min(minLength,len);
                sum -= nums[start];
                start++;
            }
        }
        if(minLength == Integer.MAX_VALUE){
            return 0;
        }
        return minLength;
    }
}