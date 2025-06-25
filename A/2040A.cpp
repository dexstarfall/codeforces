#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int ar[n];
        for (auto& i : ar) cin >> i;

        if (n > 1) {

            bool count = 0;
            int check = 0;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    count = 0;
                    if (i != j and (abs(ar[i] - ar[j]) % k == 0)) {
                        count = 1;
                        break;
                    }
                }

                if (count == 0) {
                    cout << "YES" << endl << i + 1 << endl;
                    break;
                } else {
                    check++;
                    if (check == n) cout << "NO" << endl;
                }
            }

        } else
            cout << "YES" << endl
            << 1 << endl;

    }
    return 0;
}