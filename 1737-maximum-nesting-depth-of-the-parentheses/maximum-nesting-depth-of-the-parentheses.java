class Solution {
    public int maxDepth(String s) {
        Stack<Character>st = new Stack<>();
        int maxi = 0;
        for(char ch : s.toCharArray()){
            if(ch == '('){
                st.push(ch);
            }
            else if(ch == ')'){
                maxi = Math.max(maxi,st.size());
                st.pop();
            }
        }
        return maxi;
    }
}