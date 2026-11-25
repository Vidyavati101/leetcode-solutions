
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}
#ifdef LOCAL_TEST
#include <stdio.h>
#include <assert.h>

int main() {
    // Test Case 1: Target found
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    assert(search(nums1, 6, 9) == 4);

    // Test Case 2: Target not found
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    assert(search(nums2, 6, 2) == -1);

    // Test Case 3: Single element
    int nums3[] = {5};
    assert(search(nums3, 1, 5) == 0);

    printf("All test cases passed!\n");
    return 0;
}
#endif
