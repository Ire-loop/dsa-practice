#include <iostream>
using namespace std;

// https://docs.google.com/document/d/1A3N1gZqA9tFGgZY1UH_DhMiNEefI6PU6n-Yn5d79xP8/edit?addon_store&tab=t.0
int main() {
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < n; j++) cout << "*";
        cout << endl;
    }

    return 0;
}