class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int i = 0;
        // int j=1;
        vector<int> ans;
        vector<int> pos;
        vector<int> neg;
        // for(int j=1;j<nums.size();j++){
        //     if(nums[i]>0 && nums[j]<0){
        //         ans.push_back(nums[i]);
        //         ans.push_back(nums[j]);
        //         nums[i]=0;
        //         nums[j]=0;
        //         i++;
        //     }
        //     else if(nums[i]==0 && nums[j]==0){
        //         i++;
        //         // j++;
        //     }
        //     // while(nums[i]>0){
        //     //     i++;
        //     // }
        // }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
        }
        int i = 0, j = 0;
        while (i < pos.size() && j < neg.size()) {
            ans.push_back(pos[i++]); // Push from the first vector
            ans.push_back(neg[j++]); // Push from the second vector
        }
        return ans;
    }
};