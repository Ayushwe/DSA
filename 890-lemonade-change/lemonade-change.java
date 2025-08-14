class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five = 0;
        int ten = 0;
        int twenty = 0;
        for(int i=0;i<bills.length;i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                if(five<1){
                    return false;
                }
                five--;
                ten++;
            }
            else{
                if(five<1){
                    return false;
                }
                else if(five<3 && ten < 1){
                    return false;
                }
                else{
                    if(ten>0 && five>0){
                        ten--;
                        five--;
                        twenty++;
                    }
                    else if(five >= 3){
                        five = five-3;
                        twenty++;
                    }
                }
            }
        }
        return true;
    }
}