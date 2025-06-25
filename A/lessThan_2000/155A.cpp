#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int contest[n];
    for (auto & i: contest) cin >> i;
 
    int smallest = contest[0], largest = contest[0], count = 0;
    for (int i = 0; i < n; i++) {
        if (contest[i] < smallest) {
            smallest = contest[i];
            count++;
        }
        if (contest[i] > largest) {
            largest = contest[i];
            count++;
        }
    }
    cout << count << endl;
 
}
 
int main() {
    solve();
    return 0;
}