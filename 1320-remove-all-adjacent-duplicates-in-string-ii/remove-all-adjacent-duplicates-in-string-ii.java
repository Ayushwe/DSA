class Solution {
    public String removeDuplicates(String s, int k) {
        Stack<Integer>countSt = new Stack<>();
        Stack<Character>stringSt = new Stack<>();
        for(char ch : s.toCharArray()){
            if(!stringSt.isEmpty() && stringSt.peek() == ch){
                int newCount = countSt.pop()+1;
                if(newCount == k){
                    stringSt.pop();
                }
                else{
                    countSt.push(newCount);
                }
            }
            else{
                stringSt.push(ch);
                countSt.push(1);
            }
        }

        StringBuilder ans = new StringBuilder();
        while(!stringSt.isEmpty()){
            char ch = stringSt.pop();
            int count = countSt.pop();
            for(int i=0;i<count;i++){
                ans.append(ch);
            }
        }
        return ans.reverse().toString();
    }
}