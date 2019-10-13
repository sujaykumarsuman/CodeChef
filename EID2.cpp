#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> a, vector<int> c)
{
    if((a[0] > a[1] && c[0] > c[1]) || (a[0] == a[1] && c[0] == c[1]) || (a[0] < a[1] && c[0] < c[1])){
        if((a[0] > a[2] && c[0] > c[2]) || (a[0] == a[2] && c[0] == c[2]) || (a[0] < a[2] && c[0] < c[2])){
            if((a[1] > a[2] && c[1] > c[2]) || (a[1] == a[2] && c[1] == c[2]) || (a[1] < a[2] && c[1] < c[2])){
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, i, res;
    vector<int> a(3), c(3);
    cin>>t;
    while(t--){
        for(i = 0; i < 3; i++)
            cin>>a[i];
        for(i = 0; i < 3; i++)
            cin>>c[i];
        res = solve(a, c);
        if(res)
            cout<<"FAIR\n";
        else
            cout<<"NOT FAIR\n";
    }
    return 0;
}
