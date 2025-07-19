class Solution {
    public String largestOddNumber(String num) {
        StringBuilder ans = new StringBuilder();
        for(int i=num.length()-1;i>=0;i--){
            int number = num.charAt(i) - '0';
            if(number % 2 == 1){
                ans.append(num.substring(0,i+1));
                break;
            }
        }
        return ans.toString();
    }
}