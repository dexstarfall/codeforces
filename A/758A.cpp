#include <bits/stdc++.h>
using namespace std;
 
int elem_sum_less_than_max(int arr[], int n, int max_element) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < max_element) sum += max_element - arr[i];
    }
    return sum;
}
 
int main() {
    int n;
    cin >> n;

    int arr[n], max_element = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (max_element < arr[i]) max_element = arr[i];
    }

    cout << elem_sum_less_than_max(arr, n, max_element);
    return 0;
}