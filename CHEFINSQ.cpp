#include<bits/stdc++.h>
typedef int64_t ll;
using namespace std;

ll ncr(ll cnt, ll k)
{
    ll ans = 1;
    for(ll i = 1; i <= k; i++){
        ans *= cnt - k + i;
        ans /= i;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        ll ec = 0, tc = 0, res;
        sort(arr, arr+n);
        ll num = arr[k-1];
        for(ll i = k-1; i >= 0; i--){
            if(arr[i] == num)
                ec++;
            else
                break;
        }
        for(ll i = 0; i < n; i++){
            if(arr[i] > num)
                break;
            if(arr[i] == num)
                tc++;
        }
        res = ncr(tc, ec);
        cout<<res<<"\n";
    }
        return 0;
}
