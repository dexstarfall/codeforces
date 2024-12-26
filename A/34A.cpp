#include <bits/stdc++.h>
using namespace std;

// solution function
int min_par_index(int arr1[], int n) {
    int arr2[n], index = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1) arr2[i] = abs(arr1[i] - arr1[0]);
        else arr2[i] = abs(arr1[i] - arr1[i + 1]);
        if (arr2[i] < arr2[index]) index = i;
    }
    return index;
}
//main function
int main() {
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++) cin >> arr1[i];

    int index = min_par_index(arr1, n) + 1;

    if (index == n) cout << n << " " << 1;
    else cout << index << " " << index+1;
    return 0;
}