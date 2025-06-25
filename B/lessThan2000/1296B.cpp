#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int t; cin >> t;
    while (t--) {
        int s; cin >> s;
        long long total_burle = 0;
        while (s >= 10) {
            int temp = s / 10;
            total_burle += temp * 10;
            s = (s % 10) + temp;
        }
        total_burle += s;
        cout << total_burle << "\n";
    }
    return 0;
}