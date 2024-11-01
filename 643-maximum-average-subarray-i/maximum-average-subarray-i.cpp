class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double Average=0;
        double WindowSum=0;
        for(int i=0;i<k;i++){
            WindowSum+=nums[i];
        }
        Average=WindowSum;
        for(int i=k;i<nums.size();i++){
            WindowSum=WindowSum+nums[i]-nums[i-k];
            Average=max(Average,WindowSum);
        }
        return Average/k;
    }
};