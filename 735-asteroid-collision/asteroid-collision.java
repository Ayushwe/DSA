import java.util.Stack;

class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        int n = asteroids.length;
        Stack<Integer> st = new Stack<>();
        
        for (int i = 0; i < n; i++) {
            if (st.isEmpty() || asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                while (!st.isEmpty() && st.peek() > 0) {
                    if (Math.abs(st.peek()) < Math.abs(asteroids[i])) {
                        st.pop();
                        continue;
                    } else if (Math.abs(st.peek()) == Math.abs(asteroids[i])) {
                        st.pop();
                        // Prevents pushing the negative asteroid
                        asteroids[i] = 0;
                    }
                    break;
                }
                // Only push if the asteroid was not destroyed (not `0`)
                if (asteroids[i] != 0 && (st.isEmpty() || st.peek() < 0)) {
                    st.push(asteroids[i]);
                }
            }
        }

        int[] ans = new int[st.size()];
        for (int i = ans.length - 1; i >= 0; i--) {
            ans[i] = st.pop();
        }
        return ans;
    }
}
