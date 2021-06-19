#include <iostream>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll D, d, P, Q;
        cin >> D >> d >> P >> Q;
        ll x = D / d, ans = d * x * P + Q * ((x - 1) * x * d) / 2;
        if (D % d == 0)
        {
            cout << ans << "\n";
        }
        else
        {
            ll rem = D % d;
            ans += rem * (P + x * Q);
            cout << ans << "\n";
        }
    }

    return 0;
}