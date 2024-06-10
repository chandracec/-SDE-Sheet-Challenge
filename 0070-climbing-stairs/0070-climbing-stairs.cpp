class Solution {
public:
     int climbStairs(int n) {
    // Base cases: If there is 0 or 1 step, there is only 1 way to climb the stairs.
    if (n <= 1) return 1;
    
    // Initialize the number of ways to climb 1 step and 2 steps.
    int prev1 = 1; // Ways to climb 1 step
    int prev2 = 1; // Ways to climb 2 steps
    int ans = 0;   // Variable to store the answer for each step

    // Iterate from the 2nd step to the nth step
    for (int i = 2; i <= n; i++) {
        // The number of ways to climb the current step is the sum of the ways to climb the two previous steps.
        ans = prev1 + prev2;
        
        // Update prev2 to be the ways to climb (i-1) steps for the next iteration.
        prev2 = prev1;
        
        // Update prev1 to be the ways to climb (i) steps for the next iteration.
        prev1 = ans;
    }

    // Return the number of ways to climb n steps.
    return ans;}
};