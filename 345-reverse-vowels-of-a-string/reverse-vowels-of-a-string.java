class Solution {
    public String reverseVowels(String s) {
        ArrayList<Character>vowels = new ArrayList<>();
        for(char ch : s.toCharArray()){
            if(ch == 'A'||ch == 'a'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u'){
                vowels.add(ch);
            }
        }
        Collections.reverse(vowels);
        int index = 0;
        StringBuilder ans = new StringBuilder();
        for(char ch : s.toCharArray()){
            if(ch == 'A'||ch == 'a'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u'){
                ans.append(vowels.get(index));
                index++;
            }
            else{
                ans.append(ch);
            }
        }
        return ans.toString();
    }
}