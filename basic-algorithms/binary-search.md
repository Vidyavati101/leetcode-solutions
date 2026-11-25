## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
I used the binary search technique to find the target element in a sorted array. I maintain two pointers, `left` and `right`, and calculate the middle index. If the middle element matches the target, I return its index. Otherwise, I search in the appropriate half.

### Complexity
- **Time:** O(log n)
- **Space:** O(1)

### Notes
Binary search works only when the array is sorted. If the target is not found, the function returns -1.