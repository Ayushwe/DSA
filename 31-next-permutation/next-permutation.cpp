class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int Break_Point = -1;
        int n= nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                Break_Point=i;
                break;
            }
        }
        for(int i=n-1; i>=Break_Point && Break_Point != -1; i--){
            if(nums[i] > nums[Break_Point]){
                swap(nums[i], nums[Break_Point]);
                break;
            }
        }
        reverse(nums.begin() + Break_Point + 1, nums.end());
    }
};