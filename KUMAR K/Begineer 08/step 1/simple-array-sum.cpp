#include <iostream>
#include <vector>
using namespace std;

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(vector<int> ar) {
    int sum = 0;

    for (size_t i = 0; i < ar.size(); i++) { sum += ar[i]; }

    return sum;
}

// Problem link:
int main() { return 0; }