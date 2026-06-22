#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// How to find GCD of two numbers.

/*
    APPROACH 1
    int findGCD(int a, int b) {
        if (a < b) std::swap(a, b); // This is redundant this could be taken care by the modulo operator.

        int result = b; // Any ways getting updated in variable a so caon be removed.

        while (b != 0) {
            result = b;
            b = a % b;
            a = result;
        }

        return result;
    }

    APPROACH 2: Problem is HCF can't be negative for any number
    int findGCD(int a, int b) {
        int temp = 0;

        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    APPROACH 3:
    int findGCD(int a, int b) {
        a = std::abs(a);
        b = std::abs(b);

        int temp = 0;

        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

*/

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

/*
    APPROACH 1: This is a wrong approach of finding LCM.
    int findLCM(vector<int> a) {
        int n = a.size(), hcf_a = 0, p_a = 0;

        for (int i = 0, t = 0; i < n; i++) {
            t = a[i];
            p_a *= t;

            hcf_a = findGCD(hcf_a, t);
        }

        return p_a / hcf_a;
    }

    APPROACH 2

*/

int findGCD(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);

    int temp = 0;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int findLCM(vector<int> a) {
    int n = a.size();

    int lcm = a[0]; // max exponents from first element
    for (int i = 1; i < n; i++)
        lcm = lcm / findGCD(lcm, a[i]) * a[i]; // fold in next, updating each prime to the running max

    return lcm;
}

int getTotalX(vector<int> a, vector<int> b) {
    int n = a.size(), m = b.size(), lcm_a = 0, ans = 0, min_b = *min_element(b.begin(), b.end());

    lcm_a = findLCM(a);

    for (int i = lcm_a; i <= min_b; i += lcm_a) {
        int j = 0;

        for (; j < m; j++) {
            if (b[j] % i != 0) break;
        }

        if (j == m) ans++;
    }

    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
