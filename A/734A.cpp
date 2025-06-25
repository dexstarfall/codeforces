//check who is won, Anton or Danik or friendship
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int a = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            a++;
        } else {
            d++;
        }
    }

    if (a > d) {
        cout << "Anton" << endl;
    } else if (a < d) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}