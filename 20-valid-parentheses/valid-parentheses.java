class Solution {
    public boolean isValid(String s) {
        Stack<Character> sh = new Stack<>();

        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                sh.push(')');
            } else if (ch == '{') {
                sh.push('}');
            } else if (ch == '[') {
                sh.push(']');
            } else {
                if (sh.isEmpty() || sh.pop() != ch) {
                    return false;
                }
            }
        }

        return sh.isEmpty();
    }
}
