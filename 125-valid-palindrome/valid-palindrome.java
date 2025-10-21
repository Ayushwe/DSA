class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder temp = new StringBuilder();
        for(int i=0;i<s.length();i++){
            char ch  = s.charAt(i);
            if(Character.isLetterOrDigit(ch)){
                temp.append(Character.toLowerCase(ch));
            }
        }
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