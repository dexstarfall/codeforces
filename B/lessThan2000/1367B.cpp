#include <bits/stdc++.h>

using namespace std;
void minMoves(){
    int n; cin >> n;
    int even_number = 0, odd_number = 0;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arr[i] = num;
        if ( i % 2 == 0 and num % 2 == 1) odd_number++;
        else if ( i % 2 == 1 and num % 2 == 0 ) even_number++;
    }
    if (even_number == odd_number) cout << even_number <<"\n";
    else cout << -1 << "\n";
}

//main function
int main() {
    int t; cin >> t;
    while (t--) minMoves();
    return 0;
}