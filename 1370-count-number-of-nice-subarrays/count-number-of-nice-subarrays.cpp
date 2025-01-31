class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return SumArray(nums,k)-SumArray(nums,k-1);
    }
    int SumArray(vector<int>& nums, int k) {
        int count = 0;
        int sum=0;
        int start=0;
        int end=0;
        if(k<0){
            return 0;
        }
        while(end<nums.size()){
            sum += nums[end]%2;
            while(sum>k){
                sum -=(nums[start] % 2);
                start++;
            }
            count += (end-start)+1;
            end++;
        }
        return count;
    }
};