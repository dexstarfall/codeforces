#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int police_recruits = 0, untreated_crime = 0;
    for (int i = 0; i < n; i++) {
        int a_ith;
        cin >> a_ith;

        if (a_ith == -1 && police_recruits == 0) {
            if (police_recruits > 0) police_recruits--;
            else untreated_crime++;
        } else police_recruits += a_ith;

    }
    cout << untreated_crime;
    return 0;
}