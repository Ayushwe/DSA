class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer>map = new HashMap<>();
        for(int num : nums){
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        int majority = nums.length/2;
        for(Map.Entry<Integer,Integer>entry : map.entrySet()){
            if(entry.getValue()>majority){
                return entry.getKey();
            }
        }
        return 0;
    }
}