class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long MaxSum=0;
        long long WindowSum=0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            WindowSum+=nums[i];
        }

       if(mp.size()==k){
        MaxSum = max(MaxSum,WindowSum);
       }
        for(int i=k;i<nums.size();i++){
            
            WindowSum=WindowSum+nums[i]-nums[i-k];
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if(mp[nums[i-k]]==0){
                mp.erase(nums[i-k]);
            }
            if(mp.size()==k){
                MaxSum=max(MaxSum,WindowSum);
            }
            
        }
        return MaxSum;
    }
};