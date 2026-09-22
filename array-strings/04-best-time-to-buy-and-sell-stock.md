## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum price seen so far while traversing the array. For every price, I calculate the possible profit and update the maximum profit when a larger value is found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold. If no profit can be made, the result is 0.