import java.util.Stack;

class Solution {

    public int sumSubarrayMins(int[] arr) {
        int n = arr.length;
        Stack<Integer> st = new Stack<>();
        int[] left = new int[n];
        int[] right = new int[n];

        // Finding Left Boundary (previous smaller element count)
        for (int i = 0; i < n; i++) {
            // Change: Use strict '>' to find the first smaller element
            while (!st.isEmpty() && arr[st.peek()] > arr[i]) {
                st.pop();
            }
            // Change: Store span count, not just index
            left[i] = st.isEmpty() ? (i + 1) : (i - st.peek());
            st.push(i);
        }

        st.clear();

        // Finding Right Boundary (next smaller element count)
        for (int i = n - 1; i >= 0; i--) {
            // Change: Use '>=' to correctly track the next smaller element
            while (!st.isEmpty() && arr[st.peek()] >= arr[i]) {
                st.pop();
            }
            // Change: Store span count, not just index
            right[i] = st.isEmpty() ? (n - i) : (st.peek() - i);
            st.push(i);
        }

        // Compute sum of min contributions
        long sum = 0;
        int mod = (int) 1e9 + 7;
        for (int i = 0; i < n; i++) {
            // Change: Correct contribution calculation
            sum = (sum + (long) arr[i] * left[i] * right[i]) % mod;
        }

        return (int) sum;
    }

    public int sumSubarrayMax(int[] arr) {
        int n = arr.length;
        Stack<Integer> st = new Stack<>();
        int[] left = new int[n];
        int[] right = new int[n];

        // Finding Left Boundary (previous greater element count)
        for (int i = 0; i < n; i++) {
            // Change: Use '<' to find the first greater element
            while (!st.isEmpty() && arr[st.peek()] < arr[i]) {
                st.pop();
            }
            // Change: Store span count, not just index
            left[i] = st.isEmpty() ? (i + 1) : (i - st.peek());
            st.push(i);
        }

        st.clear();

        // Finding Right Boundary (next greater element count)
        for (int i = n - 1; i >= 0; i--) {
            // Change: Use '<=' to correctly track the next greater element
            while (!st.isEmpty() && arr[st.peek()] <= arr[i]) {
                st.pop();
            }
            // Change: Store span count, not just index
            right[i] = st.isEmpty() ? (n - i) : (st.peek() - i);
            st.push(i);
        }

        // Compute sum of max contributions
        long sum = 0;
        int mod = (int) 1e9 + 7;
        for (int i = 0; i < n; i++) {
            // Change: Correct contribution calculation
            sum = (sum + (long) arr[i] * left[i] * right[i]) % mod;
        }

        return (int) sum;
    }

    public long subArrayRanges(int[] nums) {
        // Final computation: Difference between max and min sums
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
}
