#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
  	ios_base::sync_with_stdio(false);
  	cin.tie(0);
    ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	sort(a,a+n);
	for (ll i = 0; i < n; i++)
		a[i] = a[i]*(n-i);
	ll *t = max_element(a,a+n);
	cout << *t;
	return 0;
}
