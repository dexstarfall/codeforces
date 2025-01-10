#include <bits/stdc++.h>
using namespace std;

string who_won(int n, int c, int points[], int timeTaken[]) {
    int tsumL = 0, tsumR = 0, psumL = 0, psumR = 0;
    for (int i1 = 0, i2 = n - 1; i1 < n; i1++, i2--) {
        tsumL += timeTaken[i1], tsumR += timeTaken[i2];
        psumL += max(0, points[i1] - (tsumL * c));
        psumR += max(0, points[i2] - (tsumR * c));
    }

    if (psumL > psumR) return "Limak";
    else if (psumL < psumR) return "Radewoosh";
    else return "Tie";
}

int main() {
    int n, c;
    cin >> n >> c;
    int points[n], timeTaken[n];
    for (auto & it: points) cin >> it;
    for (auto & it: timeTaken) cin >> it;
    cout << who_won(n, c, points, timeTaken);

    return 0;
}