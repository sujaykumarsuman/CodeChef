#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, a;
	cin >> n >> a;
	while(a--){
	    n = (n%10)?n-1:n/10;
	}
	cout << n;
	return 0;
}
