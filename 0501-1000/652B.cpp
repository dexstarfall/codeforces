#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int arr[n]; for(auto &it: arr) cin >> it;
	int arr2[n];
	
	sort(arr, arr + n);
	
	for (int i=n-1, j=1 ; i >= n/2 ; i--,j+=2 ) {
	   arr2[j] = arr[i];
	} 
	for (int i=0, j=0; i < (n+1)/2 ;i++,  j+=2) {
	   arr2[j] = arr[i];
	}
	
	for(auto it: arr2) cout << it << " ";

}
