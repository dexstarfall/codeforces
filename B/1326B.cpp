#include <bits/stdc++.h>
using namespace std;
 
//main function
int main() {
    int n;
    cin >> n;
    long long a_arr[n], x = 0;
    for (int i = 0; i < n; i++) {
        cin >> a_arr[i];
        a_arr[i] += x;
        x = max(x, a_arr[i]);
        cout << a_arr[i] << " ";
    }
    return 0;
}