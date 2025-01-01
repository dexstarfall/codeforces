#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int sum = (abs(str[0] - 'a') > 13) ? 26 - abs(str[0] - 'a') : abs(str[0] - 'a');
    for (int i = 1; i < str.length(); i++) {
        int temp = 0;
        temp = abs(str[i] - str[i - 1]);
        if (temp > 13) sum += 26 - temp;
        else sum += temp;
    }
    cout << sum;

    return 0;
}