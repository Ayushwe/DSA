class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int current = 1;
        for(int i=0;i<nums.size();i++){
            current *= nums[i];
            maxi = max(maxi,current);
            if(current == 0){
                current = 1;
            }
        }
         current = 1;

        // Right to Left
        for(int i=nums.size()-1;i>=0;i--){
            current *= nums[i];
            maxi = max(maxi,current);
            if(current == 0) current = 1;
        }

        return maxi;
    }
};