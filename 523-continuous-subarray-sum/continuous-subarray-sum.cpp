class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefixSum=0;
        unordered_map<int,int>map;
        map[0]=-1;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            if(map.find(prefixSum % k) != map.end()){
                if(i-map[prefixSum%k]>=2)
                return true;
            }
            else{
                map[prefixSum%k]=i;
            }
        }
        return false;
    }
};
