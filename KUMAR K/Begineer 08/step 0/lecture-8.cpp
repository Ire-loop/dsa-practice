#include <iostream>
using namespace std;

// https://docs.google.com/document/d/1cVdDZFtnTKtAKLvkra8y_Bx6yPBJbcBE4yC_-AfWiBE/edit?addon_store&tab=t.0
int main() {
    int n = 0; 
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int sum = 0;

        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j < i) cout << "+";
            sum += j;
        }

        cout << "=" << sum << endl;
    }
    return 0;
}