## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a frequency counting technique with an array of size 26. First, I count the frequency of each character in the first string. Then, I decrease the count for each character in the second string. If all counts are zero, both strings are anagrams.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Both strings must contain the same characters with the same frequency. The solution assumes lowercase English letters, as specified in the problem constraints.