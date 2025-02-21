class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer,Integer>mpp = new HashMap<>();
        
        for(int i : nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        }

        for(int num : nums){
            if(mpp.get(num) == 1){
                return num;
            }
        }
        return -1;
    }

}