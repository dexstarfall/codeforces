#include <bits/stdc++.h>
using namespace std;

//method 1
string rearrange_sum(string str) {
    int str_size = str.size();
    int arr_size = (str_size + 1) / 2;

    int arr[arr_size];
    for (int i = 0, j = 0; i < str_size; i += 2, j++) {
        arr[j] = str[i] - '0';
    }
    sort(arr, arr + arr_size);
    for (int i = 0, j = 0; i < str_size; i += 2, j++) {
        str[i] = arr[j] + '0';
    }
    return str;
}

//method 2
// string rearrange_sum(string str) {
//     int str_size = str.size();
//     int arr_size = (str_size + 1) / 2;

//     multiset <int> sorted_numbers;
//     for (int i = 0, j = 0; i < str_size; i += 2, j++) {
//         sorted_numbers.emplace(str[i] - '0');
//     }
//     auto itr = sorted_numbers.begin();
//     for (int i = 0; i < str_size; i += 2) {
//         str[i] = *itr + '0';
//         ++itr;
//     }
//     return str;
// }

int main() {
    string str;
    cin >> str;

    cout << rearrange_sum(str);

    return 0;
}