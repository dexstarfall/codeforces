#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int min_oocur = min({ k2, k5, k6 });
    int remain_k2 = max(0, k2 - min_oocur);
    cout << min_oocur * 256 + min(remain_k2, k3) * 32;
    return 0;
}