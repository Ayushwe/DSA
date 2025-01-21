class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int Max = 0;
        vector<int>prefix(gain.size()+1,0);
        prefix[0]=0;
        for(int i=1;i<=gain.size();i++){
            prefix[i] = prefix[i-1] + gain[i-1];
        }
        for(int i=0;i<prefix.size();i++){
            if(prefix[i]>Max){
                Max=prefix[i];
            }
        }
        return Max;
    }
};