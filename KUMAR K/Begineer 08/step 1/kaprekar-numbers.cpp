#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

/*  ATTEMPT 1: This is not good. Propblem expicitly states that you have to check for explicitly d digit of number. That
   means d is the number of digits that n has. You don't have to iterate for each possible combination. Always read
   question carefully.

    void kaprekarNumbers(int p, int q) {
        bool isValid = false;

        for (int i = p, num = 0, d = 1; i < q; i++) {
            num = i * i;
            d = 1;

            while (num / d > 10) d *= 10;

            for (int j = d, n1 = 0, n2 = 0; j > 0; j /= 10) {
                n1 = num / j;
                n2 = num % j;

                if (n1 + n2 == i) {
                    isValid = true;
                    cout << i << " ";
                    break;
                }
            }
        }

        if (!isValid) cout << "INVALID RANGE" << endl;
    }

    ATTEMPT 2 (WRONG): We are not splitting the numbers properly
    void kaprekarNumbers(int p, int q) {
        bool isValid = false;

        for (int i = p, num = 0, d = 1; i <= q; i++) {
            num = i * i;
            d = 1;

            while (num / d > 10) d *= 10; // This condition is wrong. What are we trying to achieve here???

            int n1 = num / d, n2 = num % d;

            if (n1 + n2 == i) {
                isValid = true;
                cout << i << " ";
            }
        }

        if (!isValid) cout << "INVALID RANGE" << endl;
    }

    ATTEMPT 3 (Wrong): The num overflows past max integer value. This requires multiplication of of 2 int remember to cast them to long.
*/
void kaprekarNumbers(int p, int q) {
    bool isValid = false;

    for (int i = p, d = 1; i <= q; i++) {
        long num = (long)i * i;
        d = 10;

        while (i / d > 0) d *= 10; // Find number of digits in orignal number

        int n1 = num / d, n2 = num % d;

        if (n1 + n2 == i) {
            isValid = true;
            cout << i << " ";
        }
    }

    if (!isValid) cout << "INVALID RANGE" << endl;
}

int main() {
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());

    return s;
}
