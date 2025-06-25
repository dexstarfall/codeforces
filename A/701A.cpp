// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i].first;
//         arr[i].second = i + 1;
//     }
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n / 2; i++) {
//         cout << arr[i].second << " " << arr[n - i - 1].second << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    multiset <pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        int values;
        cin >> values;
        arr.insert({ values, i + 1 });
    }
    auto front = arr.begin();
    auto back = arr.rbegin();
    for (int i = 0; i < n / 2; i++) {
        cout << front->second << " " << back->second << endl;
        ++front, ++back;
    }
    return 0;
}