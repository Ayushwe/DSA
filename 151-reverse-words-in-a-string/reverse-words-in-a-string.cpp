class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string ans = "";
        while(i<s.length()){
            while(i<s.length() && s[i] == ' '){
                i++;
            }
            if(i>=s.length()){
                break;
            }
            int j=i+1;
            while(j<s.length() && s[j] != ' '){
                j++;
            }
            string w = "";
            w = s.substr(i,j-i);
            if(ans.empty()){
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