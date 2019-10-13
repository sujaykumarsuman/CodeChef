#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--){
        int m = 0;
        cin>>n;
        int a[n], b[n], score[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            score[i] = a[i]*20;
        }
        for(int i = 0; i < n; i++){
            cin>>b[i];
            score[i] -= (b[i]*10);
            if(score[i] < 0)
                score[i] = 0;
            if(m < score[i])
                m = score[i];
        }
        cout<<m<<endl;
    }
    return 0;
}
