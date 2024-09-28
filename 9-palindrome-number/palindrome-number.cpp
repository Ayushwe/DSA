class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        long long reverse = 0;
        long long num = x;
        while(num){
            int last_digit = num%10;
            reverse = reverse * 10 + last_digit;
            num = num/10;
        }
        if(reverse == x ){
            return true;
        }
        
        else{
            return false;
        }
    }
};