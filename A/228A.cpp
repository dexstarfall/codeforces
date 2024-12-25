#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[4];
    for(int &i : ar) cin >> i;
    set <int> st(ar, ar+4);
    cout << 4 - (st.size());

    // set<int> st;
    // int n;
    // for (int i = 0; i < 4; i++)
    // {
    //     cin >> n;
    //     st.emplace(n);
    // }
    // cout << 4 - (st.size());

    return 0;
}