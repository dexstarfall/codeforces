#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int ids[n]; for (auto &it : ids) cin >> it;
	
	/* by loop - brute force*/
	// int count = 0;
  // bool found = false;
  // for (int i = 0; i < n && !found; i++) {
  //     for (int j = 0; j < i + 1; j++) {
  //         count++;
  //         if (count == k) {
  //             cout << ids[j] << "\n";
  //             found = true;
  //             break;
  //         }
  //     }
  // }

    /* by quadratic equation */
    long long int tree_row = (long long)ceil((-1 + sqrt(1 + (8.0 * k))) / 2);
    long long int elements_covered = (tree_row * (tree_row - 1)) / 2;
    long long int index = k - elements_covered - 1;
    cout << ids[index] << "\n";
}