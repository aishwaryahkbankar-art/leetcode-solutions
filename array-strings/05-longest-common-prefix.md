## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I start with the first string as the prefix and compare it with every other string. Characters that do not match are removed from the prefix until the common prefix is found.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If the strings have no common starting characters, the result is an empty string.