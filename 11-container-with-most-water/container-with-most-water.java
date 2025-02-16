class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length-1;
        int WaterContain = 0;
        while(left<right){
            int length = Math.min(height[right],height[left]);
            int width = right - left;
            WaterContain = Math.max(WaterContain,length*width);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return WaterContain;
    }
}