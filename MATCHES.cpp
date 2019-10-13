#include<bits/stdc++.h>
typedef int64_t ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    int matches[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while(t--){
        ll a, b, sum, res = 0, rem;
        cin>>a>>b;
        sum = a+b;
        while(sum){
            rem = sum%10;
            res += matches[rem];
            sum /= 10;
        }
        cout<<res<<"\n";
    }
    return 0;
}
