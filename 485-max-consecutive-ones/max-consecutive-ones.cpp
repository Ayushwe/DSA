class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int count = 0;
        int ans=0;
        // while (i < j) {
        //     if (nums[i] == nums[j]) {
        //         count++;
        //         j++;
        //     }
        //      if (nums[i] != nums[j]) {
        //         count=1;
        //         i++;
        //     }
        // }

        // return count;
        for(;j<nums.size();j++){
            if(nums[j]==0){
                i=j+1;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};