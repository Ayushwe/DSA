class Solution {
    public int missingNumber(int[] nums) {
        int ans = -1;
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(int i : nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        }
        for(int i = 0;i<=nums.length;i++){
            if(!mpp.containsKey(i)){
                return i;
            }
        }
        return ans;
    }
}