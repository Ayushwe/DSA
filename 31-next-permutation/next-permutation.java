class Solution {
    public void nextPermutation(int[] nums) {
        // step-1 find the pivot
        int pivot = -1;
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }
        // step-2 find right most element greater than pivot
        if (pivot != -1) {
            for (int i = nums.length - 1; i >= 0; i--) {
                if (nums[i] > nums[pivot]) {
                    int temp = nums[i];
                    nums[i] = nums[pivot];
                    nums[pivot] = temp;
                    break;
                }
            }
        }
        // reverse the remaining part
        int start = pivot + 1;
        int n = nums.length;
        while (start <= n - 1) {
            int temp = nums[start];
            nums[start] = nums[n - 1];
            nums[n - 1] = temp;
            start++;
            n--;
        }
    }
}