#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> score(2);

    for (size_t i = 0; i < 3; i++) {
        if (a[i] > b[i])
            score[0]++;
        else if (a[i] < b[i])
            score[1]++;
    }

    return score;
}

// Problem link: https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
int main() { return 0; }