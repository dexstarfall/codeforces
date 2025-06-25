#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>> n;
    char arr[n][n]; 
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>> arr[i][j];
    
    for (int i=0; i<n; i++) { 
        for (int j=0; j<n; j++) {
            char &top=arr[i][j], 
                 &left= arr[i+1][j-1], 
                 &center= arr[i+1][j], 
                 &right= arr[i+1][j+1], 
                 &bottom= arr[i+2][j];
            if (top == '.') {
                if (left == '.' && center == '.' &&
                    right == '.' && bottom == '.' && 
                    i+2 < n && j+1 < n && j-1 >= 0 ) {
                    top= left= center= right= bottom= '#';
                }
                else {
                    cout<< "NO" <<"\n";
                    return 0;
                } } } }
    cout<< "YES" <<"\n";
    return 0;
}