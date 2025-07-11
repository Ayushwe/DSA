class Solution {
    public String reverseVowels(String s) {
        ArrayList<Character>temp = new ArrayList<>();
        for(char ch : s.toCharArray()){
            if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u' ){
                temp.add(ch);
            }
        }
        Collections.reverse(temp);
        StringBuilder ans = new StringBuilder();

        int j=0;
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u' ){
                ans.append(temp.get(j));
                j++;
            }
            else{
                ans.append(ch);
            }
        }
        return ans.toString();
    }
}