#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (auto & it: arr) cin >> it;
    sort(arr, arr + n);
    int it_y = n / 2, it_x = n / 2;

    long long sum_x = 0, sum_y = 0;
    for (int i = 0; i < it_y; i++) sum_y += arr[i];
    for (int i = it_x; i < n; i++) sum_x += arr[i];

    cout << sum_x * sum_x + sum_y * sum_y << "\n";

    return 0;
}