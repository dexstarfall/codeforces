#include <bits/stdc++.h>
using namespace std;

//main function
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        unordered_set < int > num_set;
        while (n--) {
            int inp; cin >> inp;
            num_set.insert(inp);
        }
        cout << num_set.size() << "\n";
    }
    return 0;
}