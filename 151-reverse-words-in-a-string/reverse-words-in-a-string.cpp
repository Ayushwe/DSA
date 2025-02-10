class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i=0;
        while(i<s.length() && i<s.length()){
            while(s[i] == ' '){
                i++;
            }
            if(i>=s.length()){
                break;
            }
            int j=i;
            while(j<s.length() && s[j] != ' '){
                j++;
            }
            string w = "";
            w = s.substr(i,j-i);
            if(ans.length()==0){
                ans += w;
            }
            else{
                ans = w + " " + ans;
            }
            i=j;
        }
        return ans;
    }
};