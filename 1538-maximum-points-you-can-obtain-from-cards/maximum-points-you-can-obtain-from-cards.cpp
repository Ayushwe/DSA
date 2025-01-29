class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int Current = 0;
        int MaxPoint = 0;

        for(int i=0;i<k;i++){
            Current += cardPoints[i];
        }
        MaxPoint = Current;

        int StartIndex = k - 1;
        int EndIndex = cardPoints.size() - 1;
        
        while (StartIndex >= 0) { 
            // Remove leftmost element and add rightmost element
            Current = Current - cardPoints[StartIndex] + cardPoints[EndIndex];

            // Update max score
            MaxPoint = max(MaxPoint, Current);

            // Move indices
            StartIndex--;
            EndIndex--;
        }
        return MaxPoint;
    }
};