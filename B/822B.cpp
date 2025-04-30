#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n, m; cin >> n >> m;
	string s, k; cin >> s >> k;
 
	vector<int> pos(1001, 1);
	vector<int> cur;
	
	for(int i = 0; i < m - n + 1; i++){
	    cur.clear();
		for(int j = 0; j < n; j++)
			if(s[j] != k[i + j] ) cur.push_back(j);
 
		if(cur.size() < pos.size()) pos = cur;
	}
 
	cout << pos.size() << endl;
	for(int i = 0; i < pos.size(); i++)
		cout << pos[i] + 1 << ' ';
 
    return 0;
}