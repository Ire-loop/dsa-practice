#include <iostream>
#include <vector>
using namespace std;

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(vector<long> ar) {
    long sum = 0;

    for (size_t i = 0; i < ar.size(); i++) { sum += ar[i]; }

    return sum;
}

// Problem link:
int main() { return 0; }