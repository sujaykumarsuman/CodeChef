#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        if((n/k)%k == 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
