class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Character>mapST = new HashMap<>();
        HashMap<Character,Character>mapTS = new HashMap<>();
        if(s.length() != t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            char Schar = s.charAt(i);
            char Tchar = t.charAt(i);
            if(mapST.containsKey(Schar)){
                if(mapST.get(Schar) != Tchar){
                    return false;
                }
            }
            else{
                mapST.put(Schar,Tchar);
            }

            if(mapTS.containsKey(Tchar)){
                if(mapTS.get(Tchar) != Schar){
                    return false;
                }
            }
            else{
                mapTS.put(Tchar,Schar);
            }
        }
        return true;
    }
}