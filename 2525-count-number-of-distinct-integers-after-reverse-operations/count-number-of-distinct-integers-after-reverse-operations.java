class Solution {
    static int reverse(int a){
        int sum=0;
        while(a>0){
            sum=sum*10+a%10;
            a/=10;
        }
        return sum;
    }
    public int countDistinctIntegers(int[] nums) {
        HashSet<Integer> h = new HashSet<>();
        for(int a:nums){
            h.add(a);
            h.add(reverse(a));
        }
        return h.size();
    }
}