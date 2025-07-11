class Solution {
    public String reverseOnlyLetters(String s) {
        char[] arr = s.toCharArray();
        int start = 0;
        int end = arr.length-1;
        while(start<end){
            if(!Character.isLetter(arr[start])){
                start++;
            }
            else if(!Character.isLetter(arr[end])){
                end--;
            }
            else{
                char temp = arr[end];
                arr[end] = arr[start];
                arr[start] = temp;
                start++;
                end--;
            }
        }
        StringBuilder ans = new StringBuilder();
        for(char ch : arr){
            ans.append(ch);
        }
        return ans.toString();
    }
}