## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
I used the two-pointer technique to move all zeroes to the end of the array. I maintain a position pointer for the next non-zero element. Whenever I find a non-zero element, I move it to the correct position.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
The solution modifies the original array in-place and maintains the relative order of non-zero elements.