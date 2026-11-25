
bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
#ifdef LOCAL_TEST
#include <stdio.h>
#include <assert.h>

int main() {
    // Test Case 1: Anagram
    assert(isAnagram("anagram", "nagaram") == true);

    // Test Case 2: Not anagram
    assert(isAnagram("rat", "car") == false);

    // Test Case 3: Empty strings
    assert(isAnagram("", "") == true);

    printf("All test cases passed!\n");
    return 0;
}
#endif
