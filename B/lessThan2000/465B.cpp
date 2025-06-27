#include <bits/stdc++.h>
using namespace std;

// 465B
int main() {
	int n; cin >> n;
	int arr[n]; for (auto &it : arr) cin >> it;
	
	int min_steps=0;
	for (int i = 0; i < n; i++) {
	 if (arr[i] == 1 ) {
	   if ( arr[i-1] == 0  && min_steps != 0) min_steps++;
	   min_steps++;
	 }
	}
	cout << min_steps << '\n';
}
