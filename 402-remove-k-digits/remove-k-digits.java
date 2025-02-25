class Solution {
    public String removeKdigits(String num, int k) {
        Stack<Character>st = new Stack<>();
        for(int i=0;i<num.length();i++){
            char c = num.charAt(i);
            while(!st.isEmpty() && k>0 && st.peek() >c){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k>0 && !st.isEmpty()){
            st.pop();
            k--;
        }

        StringBuilder temp = new StringBuilder();
        while(!st.isEmpty()){
            temp.append(st.pop());
        }

        temp.reverse();

        // Remove leading zeros
        int m = temp.length();
        StringBuilder result = new StringBuilder();
        int foundNonZero = 0;
        for (int i = 0; i < m; i++) {
            if (temp.charAt(i) == '0' && foundNonZero == 0) {
                continue;
            } else {
                result.append(temp.charAt(i));
                foundNonZero = 1;
            }
        }
        // If the result is empty, return "0"
        if (result.length() == 0)
            result.append('0');
        return result.toString();
        
    }
}