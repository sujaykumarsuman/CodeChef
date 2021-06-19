#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        cout << (Xa / xa) + (Xb / xb) << "\n";
    }
    return 0;
}