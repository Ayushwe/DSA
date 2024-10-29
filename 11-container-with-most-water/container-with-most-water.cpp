class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int waterContain = 0;
        while(left<right){
            int width = right-left;
            int length = min(height[left],height[right]);
            int CurrentWater = length*width;
            waterContain = max(waterContain,CurrentWater);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return waterContain;
    }
};