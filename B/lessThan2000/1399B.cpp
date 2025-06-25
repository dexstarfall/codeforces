#include <bits/stdc++.h>
using namespace std;

//solution function
void minMove() {
    // inputs
    int n; cin >> n;
    int candies[n], oranges[n];
    for (auto& it : candies) cin >> it;
    for (auto& it : oranges) cin >> it;

    //solutionfrom here
    int min_candies = *min_element(candies, candies + n);
    int min_oranges = *min_element(oranges, oranges + n);

    long long min_moves = 0;
    for (int i = 0; i < n; i++) {
        int eat_candies = candies[i] - min_candies;
        int eat_oranges = oranges[i] - min_oranges;

        min_moves += eat_candies + eat_oranges;
        if (eat_candies > 0 && eat_oranges > 0)
            min_moves -= min(eat_candies, eat_oranges);
    }
    cout << min_moves << "\n";
}

//main function
int main() {
    //test cases
    int t; cin >> t;
    while (t--) minMove();
    return 0;
}