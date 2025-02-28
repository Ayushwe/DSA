class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int start= 0;
        int end = 0;
        int maxi = 0;
        while(end<nums.length){
            int count = 0;
            if(nums[end]==0){
                start = end+1;
            }
            maxi = Math.max(maxi,end-start+1);
            end++;
        }
        return maxi;
    }
}