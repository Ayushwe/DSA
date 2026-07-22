class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer>map = new HashMap<>();
        int maxi = 0;
        int start = 0;
        int end = 0;
        while(end<s.length()){
            char ch = s.charAt(end);
            map.put(ch,map.getOrDefault(ch,0)+1);
            while(map.get(ch)>1){
                char startChar = s.charAt(start);
                map.put(startChar,map.get(startChar)-1);
                start++;
            }
            maxi = Math.max(maxi,end-start+1);
            end++;
        }
        return maxi;
    }
}