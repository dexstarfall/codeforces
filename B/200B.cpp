#include <bits/stdc++.h>

using namespace std;

//main function
int main() {
    int n;
    cin >> n;

    float total_fraction = 0;
    for (int i = 0; i < n; i++) {
        int orange_juice_fraction;
        cin >> orange_juice_fraction;
        total_fraction += orange_juice_fraction;
    }

    cout << total_fraction / n;
    return 0;
}