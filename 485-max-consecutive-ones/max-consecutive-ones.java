class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
        int i = 0 ;
        int j = i+1 ;
        int count = 1;
        int ans = 0;

        if(nums.length == 1 && nums[i] == 1){
            return 1;
        }

        while(i<=j && j < nums.length){
            if((nums[i] == nums[j]) && nums[i] ==  1 ){
                count++;
                ans = Math.max(count, ans);
                j++;
            }else if(nums[i] != nums[j]){
                ans = Math.max(count, ans);
                count = 0;
                i++;
            }else if( (nums[i] == nums[j] )  && nums[i] == 0 ){
                count = 0;
                j++;
            }
        }

        return ans;
    }
}