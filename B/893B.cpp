#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	int b=1, s=1, ans=1;
	for(int s=1; s<=t; s=4*s+b){
		b*=2;
		if(t%s==0) ans=s; 
	}
	cout << ans;
}