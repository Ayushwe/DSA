class Solution {
    public String removeOuterParentheses(String s) {
        Stack<Character> st = new Stack<>();
        StringBuilder ans = new StringBuilder();
        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                if (st.isEmpty()) {
                    st.push(ch);
                }
                else if (!st.isEmpty()) {
                    st.push(ch);
                    ans.append(ch);
                }
            }

            else{
                st.pop();
                if(!st.isEmpty()){
                    ans.append(')');
                }
            }
        }
        return ans.toString();
    }
}