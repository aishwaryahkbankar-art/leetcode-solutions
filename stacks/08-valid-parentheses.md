## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, it is compared with the most recent opening bracket. The string is valid if all brackets are correctly matched and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The brackets must close in the correct order. Examples of valid brackets include (), {}, and [].