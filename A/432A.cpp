#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int num_Arr[n], no_o_team = 0;

    for (int i = 0; i < n; i++) cin >> num_Arr[i];
    sort(num_Arr, num_Arr + n);

    for (int i = 0; i < n; i += 3) {
        if (i + 2 < n && k + num_Arr[i + 2] <= 5)
            no_o_team++;
    }
    cout << no_o_team;
    return 0;
}