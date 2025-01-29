class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return SUMARRAY(nums,goal)-SUMARRAY(nums,goal-1);
    }
    int SUMARRAY(vector<int>& nums, int goal) {
        if(goal<0){
            return 0;
        }
        int count = 0;
        int CurWindowSum = 0;
        int low = 0;
        int high = 0;
        while(high<nums.size()){
            CurWindowSum += nums[high];
            while(CurWindowSum>goal){
                CurWindowSum -= nums[low];
                low++;
            }
            count = count +(high-low)+1;
            high++;
        }
        return count;
    }
};