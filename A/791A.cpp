#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int count_years = 0;
    while (true) {
        if (a > b) break;
        a *= 3;
        b *= 2;
        count_years++;
    }

    cout << count_years;
    return 0;
}