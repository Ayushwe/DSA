class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int start=0;
        long long product=1;
        if(k<=1){
            return 0;
        }

        for(int end=0;end<nums.size();end++){
            product *=nums[end];

            while(product>=k){
                product=product/nums[start];
                start++;
            }

            count = count + end-start + 1;
        }
        return count;
    }
};