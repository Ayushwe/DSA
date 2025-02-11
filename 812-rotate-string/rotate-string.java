class Solution {
    public boolean rotateString(String s, String goal) {
        StringBuilder S = new StringBuilder(s);

        if(s.length() != goal.length()){
            return false;
        }
        S.append(s);
        

        if(S.toString().contains(goal)){
            return true;
        }

        return false;
    }
}