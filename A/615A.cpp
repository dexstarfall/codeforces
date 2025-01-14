#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int n, m;
    cin >> n >> m;

    bool bulbs[m] = { false };
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int b;
            cin >> b;
            bulbs[b - 1] = true;
        }
    }

    for (auto it : bulbs) {
        if (it == 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}