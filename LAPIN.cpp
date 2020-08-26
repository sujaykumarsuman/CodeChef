#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=0;
    cin>>t;
    while(t--){
        char s[1200];
        cin>>s;
        cin.get();
        int len=strlen(s);
        int l=strlen(s)/2;
        char s1[600];
        char s2[600];
        if(len&1){
        strncpy(s1,s,l);
        s1[l]='\0';
        strcpy(s2,s+l+1);
        s2[l]='\0';
        }
        else{
            strncpy(s1,s,l);
            s1[l]='\0';
            strcpy(s2,s+l);
            s2[l]='\0';
        }
        string p1=s1;
        string p2=s2;
        sort(p1.begin(),p1.end());
        sort(p2.begin(),p2.end());
        if(p1.compare(p2))
          cout<<"NO"<<endl;
        else
          cout<<"YES"<<endl;
    }
}
