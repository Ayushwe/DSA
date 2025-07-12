class Solution {
    public String removeDuplicates(String s) {
        Stack<Character>st = new Stack<>();
        for(char ch : s.toCharArray()){
            if(st.isEmpty()){
                st.push(ch);
            }
            else if(ch == st.peek()){
                st.pop();
            }
            else if(ch != st.peek()){
                st.push(ch);
            }
        }
        StringBuilder ans = new StringBuilder();
        while(!st.isEmpty()){
            ans.append(st.pop());
        }
        ans.reverse();
        return ans.toString();
    }
}