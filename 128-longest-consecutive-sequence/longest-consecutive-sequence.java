class Solution {
    public int longestConsecutive(int[] nums) {
        HashMap<Integer,Boolean>map = new HashMap<>();
        int maxLen = 0;
        for(int num : nums){
            map.put(num,Boolean.FALSE);
        }
        for(int num:nums){
            int currLength = 1;
            int NextElement = num+1;
            while(map.containsKey(NextElement) && map.get(NextElement)==false){
                currLength++;
                map.put(NextElement,Boolean.TRUE);
                NextElement++;
            }

            int PrevElement = num-1;
            while(map.containsKey(PrevElement) && map.get(PrevElement)==false){
                currLength++;
                map.put(PrevElement,Boolean.TRUE);
                PrevElement--;

            }
            maxLen = Math.max(maxLen,currLength);
        }
        return maxLen;
    }
}