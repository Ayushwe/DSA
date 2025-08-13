class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int count = 0;
        int prod = 1;
        int i= 0;
        for(int j=0;j<nums.length;j++){
            prod = prod*nums[j];
            while(prod>=k && i <= j){
                prod = prod/nums[i];
                i++;
            }
            count += j-i+1;
        }
        return count;
    }
}