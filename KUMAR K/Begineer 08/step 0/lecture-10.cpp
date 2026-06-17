#include <iostream>
#include <vector>
using namespace std;

// https://docs.google.com/document/d/1sPttEQ7LLj6vijnyjSL6HzZg0fJLh37-DdFKNVjtRd0/edit?tab=t.0
int main() {
    int n = 0;
    cin >> n;
    
   vector<int> num(n); // Initialized vector with first n values 0.

    /*  METHOD 1 (WRONG ANSWER)
        for (int i = 0; i < n; i++) num.push_back(2 * i + 1); // THIS CREATE vector of 2n lenght and first n no. are "0".
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << num[(j + i) % n];
            if (i != n - 1) cout << endl;
        }
    */
    
    for (int i = 0; i < n; i++) num[i] = 2 * i + 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << num[(j + i) % n];
        if (i != n - 1) cout << endl;
    }
    
    return 0;
}