class Solution {
    public String removeStars(String s) {
        Stack<Character>st = new Stack<>();

        for(char ch : s.toCharArray()){
            if(ch != '*'){
                st.push(ch);
            }
            else{
                st.pop();
            }
        }
        StringBuilder ans = new StringBuilder();
        while(!st.isEmpty()){
            ans.append(st.pop());
        }
        return ans.reverse().toString();
    }
}