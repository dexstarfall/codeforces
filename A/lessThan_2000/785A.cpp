#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count_faces = 0;
    for (int i = 0; i < n; i++) {
        string temp_str;
        cin >> temp_str;
        if (temp_str == "Tetrahedron")
            count_faces += 4;
        else if (temp_str == "Cube")
            count_faces += 6;
        else if (temp_str == "Octahedron")
            count_faces += 8;
        else if (temp_str == "Dodecahedron")
            count_faces += 12;
        else if (temp_str == "Icosahedron")
            count_faces += 20;
    }

    cout << count_faces;
    return 0;
}