
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}
#ifdef LOCAL_TEST
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    char a1[] = "flower";
    char a2[] = "flow";
    char a3[] = "flight";
    char *strs1[] = {a1, a2, a3};

    assert(strcmp(longestCommonPrefix(strs1, 3), "fl") == 0);

    char b1[] = "dog";
    char b2[] = "racecar";
    char *strs2[] = {b1, b2};

    assert(strcmp(longestCommonPrefix(strs2, 2), "") == 0);

    printf("All test cases passed!\n");
    return 0;
}
#endif
