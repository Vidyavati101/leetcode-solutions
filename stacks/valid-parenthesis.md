## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used a stack data structure to check whether the brackets are balanced. Whenever I find an opening bracket, I push it onto the stack. For a closing bracket, I check whether it matches the top opening bracket. If all brackets match and the stack is empty at the end, the string is valid.

### Complexity
- **Time:** O(n)
- **Space:** O(n)

### Notes
The solution handles different types of brackets: parentheses (), curly brackets {}, and square brackets []. A string is invalid if brackets are mismatched or left unclosed.