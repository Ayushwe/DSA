class Solution {
    public int myAtoi(String s) {
        int i = 0;
        int sign = 1;
        int ans = 0;
        // step-1 remove white space
        while(i<s.length() && s.charAt(i) == ' '){
            i++;
        }
        // step-2 handle sign
        if (i < s.length() && (s.charAt(i) == '+' || s.charAt(i) == '-')){
            if(s.charAt(i) == '-'){
                sign = -1;
            }
            else{
                sign = 1;
            }
            i++;
        }
        while(i<s.length() && Character.isDigit(s.charAt(i))){
            int digit = s.charAt(i) - '0';
            if(ans > (Integer.MAX_VALUE - digit)/10){
                return (sign == 1) ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }
            ans = ans * 10 + digit;
            i++;
        }
        return ans*sign;
    }
}