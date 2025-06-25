#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;  cin >> n >> m;
  int arr[n][m];
  for (auto & row: arr)
    for (auto & element: row) cin >> element;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int min_val = arr[i][0];
    for (int j = 0; j < m; j++) {
      min_val = min(min_val, arr[i][j]);
    }
    ans = max(ans, min_val);
  }
  cout << ans;
}