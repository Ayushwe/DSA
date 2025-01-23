class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long >prefix(nums.size(),0);
        prefix[0] = nums[0];
        int count = 0;
        long long remaining = 0;
        for(int i=1;i<nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        long long total = prefix[nums.size()-1];
        for(int i=0;i<prefix.size()-1;i++){
            remaining = total - prefix[i];
            if(prefix[i]>=remaining){
                count++;
            }
        }
        return count;
    }
};