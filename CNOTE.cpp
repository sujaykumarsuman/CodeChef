#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=0;
    cin>>t;
    int x,y,k,n;
    while(t--){
    cin>>x>>y>>k>>n;
    int pagesRequired=abs(x-y);
    bool flag=false;
    for(int i=0;i<n;i++){
        int tempP,tempC;
      cin>>tempP>>tempC;
      if(tempP>=pagesRequired and tempC<=k){
        flag=true;
      }
    }
    if(flag)
      cout<<"LuckyChef"<<endl;
    else
    cout<<"UnluckyChef"<<endl;
  }
}
