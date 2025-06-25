#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int card_deck_number[n];
    for (int i = 0; i < n; i++)cin >> card_deck_number[i];

    int sereja_points = 0, dima_points = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (card_deck_number[i] > card_deck_number[j]) {
            sereja_points += card_deck_number[i];
            i++;
        } else {
            sereja_points += card_deck_number[j];
            j--;
        }
        if (i > j) break;
        if (card_deck_number[i] > card_deck_number[j]) {
            dima_points += card_deck_number[i];
            i++;
        } else {
            dima_points += card_deck_number[j];
            j--;
        }
    }
    cout << sereja_points << " " << dima_points << "\n";

    return 0;
}