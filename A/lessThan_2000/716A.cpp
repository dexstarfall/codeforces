#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 1;
    for (int i = 1; i < n; i++) {
        count++;
        if (arr[i] - arr[i - 1] > c) count = 1;
    }
    cout << count << endl;
    return 0;
}