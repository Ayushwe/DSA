class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // get the sum of Starting Window
        int sum = 0;
        int maxSum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        maxSum = sum;
        // start sliding window
        int StartIndex = 0;
        int lastIndex = k;
        while(lastIndex < nums.size()){
            // remove previous element 
            sum -= nums[StartIndex];
            StartIndex++;
            // add next element
            sum += nums[lastIndex];
            lastIndex++;
            // update max sum
            maxSum = max(sum,maxSum);
        }
        double ans = maxSum/(double)k;
        return ans;
    }
};