class Solution {
public:
    void sortColors(vector<int>& nums) {
         int n= nums.size();
        map<int, int> mpp;
 
        for(int it: nums){
            mpp[it]++;
        }

        nums.clear();

        for(int j=0; j< mpp[0] ; j++){
            // Inserting element at the end
            nums.push_back(0);
            
        }
      
        for(int j=0; j< mpp[1] ; j++){
            // Inserting element at the end
            nums.push_back(1);
        }
        
        for(int j=0; j< mpp[2] ; j++){
            // Inserting element at the end
            nums.push_back(2);
        }
    }
};