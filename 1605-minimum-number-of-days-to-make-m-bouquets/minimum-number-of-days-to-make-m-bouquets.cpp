class Solution {
public:
bool possible(vector<int> &bloomDay, int day, int m, int k) {
    int count=0;
    int n = bloomDay.size();
    int NoOfBouquets=0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day){
            count++;
        }
        else{
            NoOfBouquets += (count/k);
            count=0;
        }
    }
     NoOfBouquets += (count/k);
     return  NoOfBouquets>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        // long long =m*k;
         long long requiredDays = m * 1ll * k * 1ll;
        int n= bloomDay.size();
        if(requiredDays>n){
            return -1;
        }
        int maxi=INT_MIN;
        int mini= INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
        int low=mini;
        int high=maxi;
        while(low<=high){
            int mid =(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};