#include <bits/stdc++.h>

using namespace std;

void min_move() {
    long long n;
    cin >> n;
    int count_move = 0;
    while (true) {
        if (n == 1) break;
        else if (n % 2 == 0) n /= 2, count_move++;
        else if (n % 3 == 0) n = 2 * n / 3, count_move++;
        else if (n % 5 == 0) n = 4 * n / 5, count_move++;
        else {
            count_move = -1;
            break;
        }
    }
    cout << count_move << "\n";
}

//main function
int main() {
    int t;
    cin >> t;

    while (t--) min_move();
    return 0;
}