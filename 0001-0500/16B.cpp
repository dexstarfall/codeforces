#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector <pair<int, int>> matches;
    long long stolen_matches = 0;
    for (int i=1; i<=m; i++) {
        int a, b; cin >> a >> b;
        matches.emplace_back(a,b);
    }

    auto comp = [](auto &a, auto &b) { return a.second > b.second; };
    sort(matches.begin(), matches.end(), comp);
    for (int i=0; i<m; i++) {
        int a = matches[i].first, b = matches[i].second;
        if (n <= a) {
            stolen_matches += n*b;
            break;
        }
        else {
            stolen_matches += a*b;
            n -=a;
        }
    }
    cout << stolen_matches << std::endl;
  return 0;
}