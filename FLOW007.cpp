#include <iostream>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	ll t;
	cin>>t;
	ll n;
	while(t>0)
	{
	    cin>>n;
	    ll x=n;
	    ll r=0;
	    while(x>0)
	    {
	        r=r*10+x%10; 
	        x=x/10;
	    }
	    cout<<r<<endl;
	    t--;
	}
	return 0;
}
