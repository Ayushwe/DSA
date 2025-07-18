class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double maxi = sum/k;
        int i=0;
        int j=k;
        while(j<nums.length){
            sum += nums[j];
            sum -= nums[i];
            i++;
            j++;
            maxi = Math.max(maxi,sum/k);
        }
        return maxi;
    }
}