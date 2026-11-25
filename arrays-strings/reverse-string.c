void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}
#ifdef LOCAL_TEST
#include <stdio.h>
#include <string.h>
#include <assert.h>

int main() {
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1, 5);
    assert(s1[0] == 'o' && s1[4] == 'h');

    char s2[] = {'a'};
    reverseString(s2, 1);
    assert(s2[0] == 'a');

    printf("Both test cases passed!\n");
    return 0;
}
#endif