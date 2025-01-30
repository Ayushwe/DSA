class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = nums[0];
        vector<int>prefix(nums.size(),0);
        vector<int>sufix(nums.size(),0);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
            total += nums[i];
        }
        // if(total==0){
        //     return 0;
        // }
        sufix[sufix.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            sufix[i]=sufix[i+1]+nums[i];
        }
        int ans = -1;
        for(int i=nums.size()-1;i>=0;i--){
            if(prefix[i]==sufix[i]){
                ans = i;
            }
        }
        return ans;
    }
};