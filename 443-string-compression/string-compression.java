class Solution {
    public int compress(char[] chars) {
        int index = 0;
        int i = 0;
        while(i<chars.length){
            char curr_char = chars[i];
            int count = 0;
            while(i<chars.length && chars[i] == curr_char){
                count++;
                i++;
            }
            chars[index] = curr_char;
            index++;
            if(count>1){
                String countStr = Integer.toString(count);
                for (char ch : countStr.toCharArray()) {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
}