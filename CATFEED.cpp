#include<bits/stdc++.h>
using namespace std;

bool srch(vector<int> a, int c)
{
    for(int x: a){
        if(x == c)
            return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, m, c, f = 1;
        cin>>n>>m;
        vector<int> a(m+1);
        bool it;
        for(int i = 1; i <= m; i++)
            cin>>a[i];
        vector<int> fed;
        for(int i = 1; i <= m; i++){
            bool it = srch(fed, a[i]);
            if(it){
                f = 0;
                break;
            }
            else
                fed.push_back(a[i]);
            if(i%n == 0)
                fed.clear();
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
