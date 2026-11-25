/**
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */
#include <stdlib.h>

int* twoSum(int* nums, int numsSize,
            int target, int* returnSize) {

    int* result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

#ifdef LOCAL_TEST
#include <stdio.h>
#include <assert.h>

int main() {
    int nums1[] = {2, 7, 11, 15};
    int size1 = 0;
    int *ans1 = twoSum(nums1, 4, 9, &size1);
    assert(size1 == 2 && ans1[0] == 0 && ans1[1] == 1);
    free(ans1);

    int nums2[] = {3, 2, 4};
    int size2 = 0;
    int *ans2 = twoSum(nums2, 3, 6, &size2);
    assert(size2 == 2 && ans2[0] == 1 && ans2[1] == 2);
    free(ans2);

    printf("Both test cases passed!\n");
    return 0;
}
#endif