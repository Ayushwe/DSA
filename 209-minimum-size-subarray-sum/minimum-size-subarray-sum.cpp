class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int MinLenWindow = INT_MAX;
        int CurSum = 0;
        int curWindowSize = 0;
        // two pointer sliding window
        int low=0;
        int high=0;
        while(high<nums.size()){
            CurSum += nums[high];
            high++;
            while(CurSum >= target){
                curWindowSize = high - low;
                MinLenWindow = min(curWindowSize,MinLenWindow);
                CurSum -= nums[low];
                low++;
            }
        }
        if(MinLenWindow==INT_MAX){
            return 0;
        }
        return MinLenWindow;
    }
};