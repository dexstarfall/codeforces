#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int minx = min({ x1, x2, x3 }), maxx = max({ x1, x2, x3 });
    cout << maxx - minx << endl;

    return 0;
}