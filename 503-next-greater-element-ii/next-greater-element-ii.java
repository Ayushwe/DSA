class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n]; 
        Stack<Integer> st = new Stack<>();

        // Initialize all elements to -1 (in case no greater element is found)
        for (int i = 0; i < n; i++) {
            ans[i] = -1;
        }

        // Traverse the array twice for circular condition
        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!st.isEmpty() && nums[st.peek()] <= nums[i % n]) {
                st.pop();
            }

            if (!st.isEmpty()) {
                ans[i % n] = nums[st.peek()];
            }

            // Push current index to stack
            st.push(i % n);
        }

        return ans;
    }
}