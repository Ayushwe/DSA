class Solution {
public:
    string removeOuterParentheses(string s) {
        int counter = 0;
        string ans = "";
        for(char i : s){
            if(i == '('){
                if(counter>0){
                    ans += i;
                }
                counter++;
            }
            else{
                counter--;
                if(counter>0){
                    ans += i;
                }
            }
        }
        return ans;
    }
};