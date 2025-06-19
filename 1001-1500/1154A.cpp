#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    vector <int> vec(4);
    for (auto& it : vec) cin >> it;

    sort(vec.begin(), vec.end());
    cout << vec[3] - vec[0] << " " << vec[3] - vec[1] << " " << vec[3] - vec[2];

    return 0;
}