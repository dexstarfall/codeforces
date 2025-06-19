#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int totalFruits = min({ a, b / 2, c / 4 }) * 7;
    cout << totalFruits << endl;
    return 0;
}