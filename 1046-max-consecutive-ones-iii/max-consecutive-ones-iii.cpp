class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int FlipedZero = 0;
        int maxi = INT_MIN;
        int start = 0;
        int end = 0;
        while(end<nums.size()){
            if(nums[end] == 0){
                FlipedZero++;
            }
            while(FlipedZero>k){
                if(nums[start] == 0){
                    FlipedZero--;
                }
                start++;
            }
            maxi = max(maxi,end-start+1);
            end++;
        }
        return maxi;
    }
};