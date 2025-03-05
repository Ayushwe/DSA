class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxi = 0;
        int CurrCount = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i] == 1){
                CurrCount++;
            }
            else{
                CurrCount = 0;
            }
            maxi = Math.max(maxi,CurrCount);
        }
        return maxi;
    }
}