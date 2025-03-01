class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxi = 0;
        int currLength = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i] == 1){
                currLength++;
            }
            else{
                currLength = 0;
            }
            maxi = Math.max(maxi,currLength);
        }
        return maxi;
    }
}