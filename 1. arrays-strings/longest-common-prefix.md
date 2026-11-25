## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I used the vertical scanning technique. I compare characters at the same index in all strings. If the characters do not match or a string ends, I stop and return the common prefix found so far.

### Complexity
- **Time:** O(n × m), where n is the number of strings and m is the length of the shortest string.
- **Space:** O(1), excluding the returned string.

### Notes
If the strings have no common prefix, the solution returns an empty string. If there is only one string, that string itself is the longest common prefix.