class Solution {
    public int lengthOfLongestSubstring(String s) {
        int i = 0;
        int j = 0;
        int maxi = 0;
        HashMap<Character,Integer>map = new HashMap<>();
        while(j<s.length()){
            char ch = s.charAt(j);
            map.put(ch,map.getOrDefault(ch,0)+1);
            while(map.get(ch)>1){
                map.put(s.charAt(i),map.get(s.charAt(i))-1);
                i++;
            }
            maxi = Math.max(maxi,j-i+1);
            j++;
            
        }
        return maxi;
    }
}