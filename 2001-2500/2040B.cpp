#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = 1, count = 1;
        while (a < n) {
            a = (a * 2) + 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}