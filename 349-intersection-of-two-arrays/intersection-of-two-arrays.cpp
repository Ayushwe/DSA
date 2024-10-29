class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int m=nums1.size();
        int n=nums2.size();
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(i>0 && nums1[i]==nums1[i-1]){
                i++;
                continue;
            }
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};