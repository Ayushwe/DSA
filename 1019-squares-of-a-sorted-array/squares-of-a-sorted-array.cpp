class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        int head = 0;
        int tail = n-1;
        vector<int>v(n);
        for(int pos=n-1;pos>=0;pos--){
            if(nums[head]<nums[tail]){
                v[pos]=nums[tail];
                tail--;
            }
            else if(nums[head]==nums[tail]){
                v[pos]=nums[head];
                head++;
            }
            else{
                v[pos]=nums[head];
                head++;
            }
        }
        return v;
    }
};