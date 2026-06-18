#include <iostream>
#include <vector>
using namespace std;

// Problem link:
int main() {

    int x = 0, y = 0;
    cin >> x >> y;

    vector<vector<int>> arr(x, vector<int>(y));

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) { cin >> arr[i][j]; }
    }

    // transpose
    vector<vector<int>> transpose(y, vector<int>(x));

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) { transpose[i][j] = arr[j][i]; }
    }

    for (size_t i = 0; i < y; i++) {
        for (size_t j = 0; j < x; j++) { cout << transpose[i][j] << " "; }
        cout << "\n";
    }

    return 0;
}