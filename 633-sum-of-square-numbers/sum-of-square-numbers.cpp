class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        long i = 0, j = sqrt(c), pow;
        while(i<=j)
        {
            pow = long(i*i) + long(j*j);
            if(pow == c) return true;
            if(pow > c) j--;
            else i++;
        }
        return false;
    }
};