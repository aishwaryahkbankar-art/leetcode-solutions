## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I move all non-zero elements toward the beginning of the array while maintaining their original order. After all non-zero elements are placed, the remaining positions are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The relative order of the non-zero elements must remain unchanged. The operation is performed in-place.