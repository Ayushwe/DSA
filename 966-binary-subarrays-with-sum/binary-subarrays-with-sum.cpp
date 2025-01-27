class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>prefixMap;
        prefixMap[0]=1;
        int prefixSum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            if(prefixMap.find(prefixSum-goal) != prefixMap.end()){
                count += prefixMap[prefixSum-goal];
            }
            prefixMap[prefixSum]++;
        }
        return count;
    }
};