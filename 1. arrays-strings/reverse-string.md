## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach
I used the two-pointer technique to reverse the string in-place. One pointer starts from the beginning and the other starts from the end. I swap the characters and move both pointers towards the centre until they meet.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
The solution reverses the character array without using extra space. It also works for an empty string or a string containing only one character.