## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used two pointers representing the left and right boundaries of the search range. The middle element is checked and the search range is reduced by half depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the array to be sorted. If the target is not present, the function returns -1.