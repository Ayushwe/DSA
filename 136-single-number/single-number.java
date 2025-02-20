class Solution {
    public int singleNumber(int[] nums) {
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(int i : nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        }
        for(Map.Entry<Integer,Integer>entry : mpp.entrySet()){
            if(entry.getValue() == 1){
                return entry.getKey();
            }
        }
        return 0;
    }
}