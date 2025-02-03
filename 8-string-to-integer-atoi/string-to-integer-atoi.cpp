class Solution {
public:
    int myAtoi(string s) {

        if(s.empty()){
            return 0;
        }
        int i=0;
        int sign = 1;
            while(i<s.length() && s[i] == ' '){
            i++;
            }
            if(i>=s.length()){
            return 0;
            }
            if(s[i]=='-'){
                sign = 0;
                i++;
            }
            else if(s[i]=='+'){
                i++;
            }
            long int out = 0;
            while(s[i]>='0' && s[i]<='9'){
                out = out*10;
                if(out<=INT_MIN || out>=INT_MAX){
                    break;
                }
                out += (s[i]-'0');
                i++;
            }
            if(sign==0){
                out *= -1;
            }
            if(out<=INT_MIN){
                out=INT_MIN;
            }
            else if(out>=INT_MAX){
                out = INT_MAX;
            }
        return out;
    }
};