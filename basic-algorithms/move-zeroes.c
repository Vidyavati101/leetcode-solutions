
void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
}
#ifdef LOCAL_TEST
#include <stdio.h>
#include <assert.h>

int main() {
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    int expected1[] = {1, 3, 12, 0, 0};

    for (int i = 0; i < 5; i++)
        assert(nums1[i] == expected1[i]);

    int nums2[] = {0, 0, 1};
    moveZeroes(nums2, 3);
    int expected2[] = {1, 0, 0};

    for (int i = 0; i < 3; i++)
        assert(nums2[i] == expected2[i]);

    printf("All test cases passed!\n");
    return 0;
}
#endif
