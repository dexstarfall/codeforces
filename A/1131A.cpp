#include <bits/stdc++.h>
using namespace std;

int main() {
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    int area1 = w1 * h1, area2 = w2 * h2;
    int area_big1 = (w1 + 2) * (h1 + 2), area_big2 = (w2 + 2) * (h2 + 2);
    int area_extra = 2 * (min(w1, w2) + 2);

    int marked_cells = area_big1 + area_big2 - area1 - area2 - area_extra;
    cout << marked_cells;
    return 0;
}