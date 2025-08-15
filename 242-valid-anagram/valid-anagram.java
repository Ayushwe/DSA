class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character,Integer>map = new HashMap<>();
        if(s.length() != t.length()){
            return false;
        }
        for(char ch:s.toCharArray()){
            map.put(ch,map.getOrDefault(ch,0)+1);
        }
        for(char ch : t.toCharArray()){
            map.put(ch,map.getOrDefault(ch,0)-1);
            if(map.get(ch) == 0){
                map.remove(ch);
            }
        }
        // for(Map.Entry<Character,Integer>entry : map.entrySet()){
        //     if(entry.getValue() != 0){
        //         return false;
        //     }
        // }
        if(map.size()==0){
            return true;
        }
        return false;
    }
}