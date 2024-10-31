class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(),nums.end());
        int i=0;
        for(int j=1;j<nums.size();j=j+2){
            sum += min(nums[i],nums[j]);
            i=i+2;
        }
        return sum;
    }
};