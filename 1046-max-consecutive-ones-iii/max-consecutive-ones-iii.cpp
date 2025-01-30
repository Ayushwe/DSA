class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int FlipedZero = 0;
        int MaxLength = 0;
        int CurLength = 0;
        int start=0;
        int end=0;
        while(end<nums.size()){
            if(nums[end]==0){
                FlipedZero++;
            }
           while(FlipedZero>k){
               if(nums[start]==0){
                FlipedZero--;
               }
               start++;
            }
            CurLength = end-start+1;
            MaxLength = max(MaxLength,CurLength);
            end++;
        }
        return MaxLength;
    }
};