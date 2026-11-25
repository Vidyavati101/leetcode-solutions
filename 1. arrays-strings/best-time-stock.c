
int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}
#ifdef LOCAL_TEST
#include <stdio.h>
#include <assert.h>

int main() {
    // Test Case 1: Profit possible
    int prices1[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(prices1, 6) == 5);

    // Test Case 2: No profit possible
    int prices2[] = {7, 6, 4, 3, 1};
    assert(maxProfit(prices2, 5) == 0);

    // Test Case 3: Single day
    int prices3[] = {5};
    assert(maxProfit(prices3, 1) == 0);

    printf("All test cases passed!\n");
    return 0;
}
#endif
