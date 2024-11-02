class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        int j=0;
        int Max = 0;
        for(int i=0;i<k;i++){
           pq.push({nums[i],i});
        }
        ans.push_back(pq.top().first);
        for(int i=k;i<nums.size();i++){
            pq.push({nums[i],i});

            while(pq.top().second<=j){
                pq.pop();
            }
            j++;
           ans.push_back(pq.top().first);
        }
        return ans;
    }
};