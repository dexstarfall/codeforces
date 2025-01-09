#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >>  n;
    string str;
    for (int i = 1; str.length() < n; i++) {
        str += to_string(i);
    }
    cout << str[n-1] << endl;
    return 0;
}