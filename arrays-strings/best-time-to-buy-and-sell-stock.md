## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I used a single-pass approach to find the maximum profit. I keep track of the minimum stock price seen so far and calculate the profit at each step. I update the maximum profit whenever a better profit is found.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
The solution allows only one buy and one sell transaction. Buying must happen before selling. If no profit is possible, the answer is 0.