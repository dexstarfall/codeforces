#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin >> n;
    string statement;
    while (n--)
    {
        cin >> statement;
        if (statement=="X++" or statement == "++X") count++;
        if (statement=="X--" or statement == "--X") count--;
    }
    cout << count << endl;
    return 0;
}