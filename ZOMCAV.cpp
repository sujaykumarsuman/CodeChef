#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false), std::cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, l, u, i;
		cin >> n;
		vector<int> a(n+1, 0);
		vector<int> c(n+1);
		vector<int> h(n+1);
		for(i = 1; i <= n; i++) {
			cin >> c[i];
		}
		for (i = 1; i <= n; i++) {
			cin >> h[i];
		}
		for(i = 1; i <= n; i++){
		    l = (1>i-c[i])?1:i-c[i];
		    u = i+1+c[i];
			a[l] += 1;
			if(u <= n)
			    a[u] -= 1;
		}
		for(i = 1; i <= n; i++){
		    a[i] += a[i-1];
		}
		sort(h.begin(), h.end(), greater<int>());
		sort(a.begin(), a.end(), greater<int>());
		
		if(h == a)
		    cout<<"YES\n";
		else
		    cout<<"NO\n";
	}
	return 0;
}
