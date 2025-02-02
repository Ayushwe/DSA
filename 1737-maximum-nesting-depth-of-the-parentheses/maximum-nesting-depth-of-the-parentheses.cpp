class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=INT_MIN;
        for(char& c :s){
            if(c =='('){
                count++;
                maxi = max(maxi,count);
            }
            else if(c==')'){
                count--;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};