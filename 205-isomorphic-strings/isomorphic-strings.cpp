class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,char>MapST;
        unordered_map<char,char>MapTS;
        for(int i=0;i<s.length();i++){
            char c1 = s[i];
            char c2 = t[i];
            // Checking If Mapping Already Exists
            if(MapST.count(c1) && MapST[c1] != c2){
                return false;
            }
            if(MapTS.count(c2) && MapTS[c2] != c1){
                return false;
            }
            MapST[c1]=c2;
            MapTS[c2]=c1;
        }
        return true;
    }
};