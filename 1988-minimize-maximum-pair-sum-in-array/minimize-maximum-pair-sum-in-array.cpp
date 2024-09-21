class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        int max = 0;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum>max){
                max = sum;
                i++;
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return max;
    }
};