## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used an array of 26 counters to store the frequency of each lowercase character. I increment the count for characters in the first string and decrement it for characters in the second string.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The strings are anagrams when every character has the same frequency in both strings.