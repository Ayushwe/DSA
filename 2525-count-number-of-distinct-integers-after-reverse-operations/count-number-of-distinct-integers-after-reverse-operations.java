class Solution {
    private int reverse(int n){
        int rev =0;
        while(n>0){
            int last = n%10;
            rev = rev*10+last;
            n/=10;
        }
        return rev;
    }
    public int countDistinctIntegers(int[] nums) {
        int n =nums.length;
        HashSet<Integer> map = new HashSet<>();
        for(int num: nums){
            map.add(num);
            map.add(reverse(num));
        }
        return map.size();
    }
}