#include <iostream> 
using namespace std;

// https://docs.google.com/document/d/1DqdTfxbfmnJ0NlDS_8t3KLvaKNAbW2VwBRzj9FFlmzk/edit?addon_store&tab=t.0
int main() {
    int n = 0;
    cin >> n;

    /*  QUESTION 1
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << char(65 + i + j);
                if (i != j) cout << " ";
            }
            cout << endl;
        }
    */
    
    /*  QUESTION 2: Got right in first attempt. 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << char(65 + n - 1 - i + j); // This could be easily formulated with intuition.
                if (i != j) cout << " ";
            }
            cout << endl;
        }
    */
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char(65 + n - 1 - i + j); // This could be easily formulated with intuition.
            if (i != j) cout << " ";
        }
        cout << endl;
    }

    return 0;
}