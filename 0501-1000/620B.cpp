// sting approach bad approach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int a,b; cin >> a >> b;
// 	int list[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

// 	string str;
// 	for (int i = a; i <= b ; i++) {
// 	  str += to_string(i);
// 	}
	
// 	int total = 0;
// 	for (int i=0; i< str.size(); i++) {
// 	 int index = (int)str[i]-48;
// 	  total += list[index];
// 	}
	
// 	cout << total << "\n";
// }



//  decent approach
#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;  cin >> a >> b;
  int segment_list[] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6  };

  int ans = 0;
  for (int i = a; i <= b; i++) {
    int x = i;
    while (x) {
      ans += segment_list[x % 10];
      x /= 10;
    }
  }
  cout << ans;
}