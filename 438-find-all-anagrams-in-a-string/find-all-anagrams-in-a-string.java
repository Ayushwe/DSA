class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        HashMap<Character,Integer>Smap = new HashMap<>();
        HashMap<Character,Integer>Pmap = new HashMap<>();
        List<Integer>ans = new ArrayList<>();

        for(char ch : p.toCharArray()){
            Pmap.put(ch,Pmap.getOrDefault(ch,0)+1);
        }
        int i = 0;
        int windowSize = p.length();
        for(int j=0;j<s.length();j++){
            char ch = s.charAt(j);
            Smap.put(ch,Smap.getOrDefault(ch,0)+1);
            while(j-i+1>windowSize){
                char leftChar = s.charAt(i);
                if(Smap.get(leftChar) == 1){
                    Smap.remove(leftChar);
                }
                else{
                    Smap.put(leftChar,Smap.get(leftChar)-1);
                }
                i++;
            }
            if(Smap.equals(Pmap)){
                ans.add(j-windowSize+1);
            }
        }
        return ans;
    }
}