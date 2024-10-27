class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int count =0;    //here count is counting the pivot equal values
        int i=0,n = nums.size();
        vector<int>smaller,greater;  // here i will store smaller and greater values comparing with pivot
        while(i<n){
            if(nums[i] < pivot)
                smaller.push_back(nums[i]);
            else if(nums[i] == pivot)
                count++;
            else
                greater.push_back(nums[i]);
            i++;
        }
        for(int i=0;i<count;i++){
            smaller.push_back(pivot);
        }
        for(int i=0;i<greater.size();i++){
            smaller.push_back(greater[i]);
        }
        return smaller;
    }
};