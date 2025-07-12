class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character>st1 = new Stack<>();
        Stack<Character>st2 = new Stack<>();

        for(char ch : s.toCharArray()){
            if(ch != '#'){
                st1.push(ch);
            }
            else if(ch == '#' && !st1.isEmpty()) {
                st1.pop();
            }
        }

        for(char ch : t.toCharArray()){
            if(ch != '#'){
                st2.push(ch);
            }
            else if(ch == '#' && !st2.isEmpty()) {
                st2.pop();
            }
        }
        StringBuilder str1 = new StringBuilder();
        StringBuilder str2 = new StringBuilder();

        while(!st1.isEmpty()){
            str1.append(st1.pop());
        }

        while(!st2.isEmpty()){
            str2.append(st2.pop());
        }

        return str1.toString().equals(str2.toString());
    }
}