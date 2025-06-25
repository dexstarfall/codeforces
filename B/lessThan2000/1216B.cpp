#include <bits/stdc++.h>
 
using namespace std;
 
//main function
int main() {
    int n; cin >> n;
    int arr[n], cpy_arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cpy_arr[i] = arr[i];
    }
    sort(cpy_arr, cpy_arr + n, greater < int > ());
    int ans = 1;
    for (int i = 1; i < n; i++) {
        ans += cpy_arr[i] * i + 1;
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == cpy_arr[i]) {
                arr[j] = 0;
                cout << j + 1 << " ";
                break;
            }
        }
    }
 
    return 0;
}