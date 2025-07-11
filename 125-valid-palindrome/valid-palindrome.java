class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder temp = new StringBuilder();
        for(char ch : s.toCharArray()){
            if(ch != ' ' && Character.isLetterOrDigit(ch)){
                temp.append(Character.toLowerCase(ch));
            }
        }
        // temp.toString();

        int start = 0;
        int end = temp.length()-1;
        while(start<end){
            if(temp.charAt(start) != temp.charAt(end)){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}