class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>prefixRem;
        prefixRem[0]=1;
        int prefixSum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            int rem = prefixSum % k;
            if(rem<0){
               rem = rem % k + k;
            }
            if(prefixRem.find(rem) != prefixRem.end()){
                count += prefixRem[rem];
            }
            prefixRem[rem]++;
        }
        return count;
    }
};