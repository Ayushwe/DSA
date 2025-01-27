class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefixSum =0;
        unordered_map<int,int>prefixMap;
        prefixMap[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            if(prefixMap.find(prefixSum-k) != prefixMap.end()){
                count += prefixMap[prefixSum-k];
            }
           prefixMap[prefixSum]++;
        }
        return count;
    }
};