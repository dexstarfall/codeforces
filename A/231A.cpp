#include <iostream>
using namespace std;
 
int main()
{
    int nProblems, count = 0;
    cin >> nProblems;
    bool Petya, Vasya, Tonya;
    while (nProblems--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
            count++;
    }
 
    cout << count << endl;
 
    return 0;
}