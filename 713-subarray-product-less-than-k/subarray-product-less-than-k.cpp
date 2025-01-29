class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        
        long long product=1;
        if(k<=1){
            return 0;
        }
        // two pointer
        int start=0;
        int end =0;
        while(end<nums.size()){
            product *=nums[end];

            while(product>=k){
                product=product/nums[start];
                start++;
            }

            count = count + end-start + 1;
            end++; 
        }
        return count;
    }
};