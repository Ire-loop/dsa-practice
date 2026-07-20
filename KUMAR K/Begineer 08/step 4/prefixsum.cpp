#include <iostream>
#include <vector>
using namespace std;

// Problem link:
int main() {

    vector<int> nums = {5, 8, 10, 2, 5, 2};

    int n = 6, firstLen = 3, secondLen = 2;

    /*
        n = 6
        prefixSum = [5, 13, 23, 25, 30, 32]
                     0   1   2   3   4   5

        sum of the segment from L to R
        L = 2 & R = 4

        = prefixSum[R] - prefixSum[L - 1]
        = prefixSum[4] - prefixSum[2 - 1]
        = prefixSum[4] - prefixSum[1]
        = 30 - 13
        = 17

        So this will be a constant width sliding window

        So if width is firstLen & L = 2 so R = L + firstLen - 1 where L <= n - firstLen

        For the second sub array there exist l & r which are lower and upper bound respectively

        prefixSum = [5, 13, 23, 25, 30, 32]
                          r   L       R  l

        hence r < L && l <= r || R < l && l <= r

        We need to run a second fixed window that should not overlap this window.

        APPROACH 1:
            vector<int> prefixSum(n);

            for (int i = 0, t = 0; i < n; i++) {
                t += nums[i];
                prefixSum[i] = t;
            }

            int maxSum = 0;

            // Iterate in prefix sum
            for (int L = 0; L <= n - firstLen; L++) { // i represents the starting index of first array

                int R = L + firstLen - 1, sum1 = (L > 0) ? prefixSum[R] - prefixSum[L - 1] : prefixSum[R];

                for (int l = 0; l <= n - secondLen; l++) {

                    int r = l + secondLen - 1, sum2 = (l > 0) ? prefixSum[r] - prefixSum[l - 1] : prefixSum[r];

                    // If second window overlaps with first window
                    if (l <= R && r >= L) continue;

                    maxSum = max(maxSum, sum1 + sum2);
                }
            }

            cout << maxSum;
    */

    /*
        n = 6
        prefixSum = [5, 13, 23, 25, 30, 32]
                     0   1   2   3   4   5

        suffixSum = [32, 27, 19, 9, 7, 2]
                      0   1   2  3  4  5

    */

    vector<int> prefix_sum(n), suffix_sum(n);

    for (int i = 0, t = 0; i < n; i++) {
        t += nums[i];
        prefix_sum[i] = t;
    }

    for (int i = n - 1, t = 0; i >= 0; i--) {
        t += nums[i];
        suffix_sum[i] = t;
    }

    int max_sum = 0;

    // Where first array is to the left
    for (size_t j = 0, x = 0, y = 0; j < 2; j++) {
        x = (j == 0) ? firstLen : secondLen;
        y = (j == 0) ? secondLen : firstLen;

        // x is size of first array y is size of second array
        for (int i = x - 1, sum1 = 0, sum2 = 0; i < n - y; i++) {
            sum1 = max(sum1, (i == x - 1) ? prefix_sum[i] : prefix_sum[i] - prefix_sum[i - x]);
            sum2 = (i == n - y - 1) ? suffix_sum[i + 1] : suffix_sum[i + 1] - suffix_sum[i + 1 + y];

            max_sum = max(sum1+ sum2, max_sum);
        }
    }

    cout << max_sum;

    return 0;
}