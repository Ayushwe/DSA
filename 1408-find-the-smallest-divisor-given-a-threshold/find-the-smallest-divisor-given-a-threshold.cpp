class Solution {
public:
    int sumByD(vector<int>& nums,int div){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)(nums[i])/(double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            maxi= max(maxi,nums[i]);
        }
        int low=1;
        int high=maxi;
        while(low<=high){
           int mid = low + (high-low) / 2;
            if(sumByD(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return low;
    }
};