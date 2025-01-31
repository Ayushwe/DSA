class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans ="";
        for(char i:s){
            if(i=='('){
                if(!st.empty()){
                    ans += i;
                }
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    ans += i;
                }
            }
        }
        return ans;
    }
};