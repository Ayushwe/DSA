class Solution {
    public boolean check(int[] nums) {
        int n = nums.length;
        int BreakPoint = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i%n]>nums[(i+1)%n]){
                BreakPoint++;
            }
        }
        if(BreakPoint>1){
            return false;
        }
        return true;
    }
}