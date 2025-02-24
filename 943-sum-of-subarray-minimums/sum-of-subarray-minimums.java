class Solution {
    public int sumSubarrayMins(int[] arr) {
        int n = arr.length;
        int MOD = 1_000_000_007;
        Stack<Integer>st = new Stack<>();
        int[] left = new int[n];
        int[] right = new int[n];
        
        // previous smallest element
        for(int i=0;i<n;i++){
            while(!st.isEmpty() && arr[st.peek()] >= arr[i]){
                st.pop();
            }
            if(st.isEmpty()){
                left[i] = -1;
            }
            else{
                left[i] = st.peek();
            }
            st.push(i);
        }

        st.clear();
        // next smallest elemnt
        for(int i = n-1; i>=0; i--){
            while(!st.isEmpty() && arr[st.peek()]>arr[i]){
                st.pop();
            }
            if(st.isEmpty()){
                right[i] = n;
            }
            else{
                right[i] = st.peek();
            }
            st.push(i);
        }

        long sum = 0;
        for (int i = 0; i < n; i++) {
            long count = (long) (i - left[i]) * (right[i] - i);
            sum = (sum + (count * arr[i]) % MOD) % MOD;
        }

        return (int) sum;
    }
}