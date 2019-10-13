#include<bits/stdc++.h>
typedef int64_t ld;
using namespace std;

ld fib(ld f[], ld n)
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++)
        f[i] = (f[i-1] + f[i-2])%10;
    return f[n];
}

ld findLast(ld n)
{
    ld m = 1;
    while(m <= n){
        m *= 2;
    }
    return m/2;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ld f[60] = {0};
    fib(f, 60);
    ld t;
    cin>>t;
    while(t--){
        ld n;
        cin>>n;
        ld l = findLast(n);
        l--;
        int res = f[l%60];
        cout<<res<<"\n";
    }
    return 0;
}
