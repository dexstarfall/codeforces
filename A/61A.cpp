#include <iostream>
#include <string>
using namespace std;

string solve(string a, string b) {
    string ans = a;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) ans[i] = '1';
        else ans [i] = '0';
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    string a;
    string b;

    cin >> a >> b;
    cout << solve(a, b);


    return 0;
}