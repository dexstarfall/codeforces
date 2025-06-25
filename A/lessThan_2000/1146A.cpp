#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    string str;
    cin >> str;
    int count_a = 0, str_len = str.length();
    for (int i = 0; i < str_len; i++) {
        if (str[i] == 'a') count_a++;
    }

    cout << (count_a > str_len / 2 ? str_len : 2 * count_a - 1) << "\n";

    return 0;
}