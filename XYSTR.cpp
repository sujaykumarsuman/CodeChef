#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  int t=0;
  cin>>t;
  while(t--){
    cin>>s;
  long long count=0;
  for(int i=0;i<s.length()-1;)
  {
    if(s[i]!=s[i+1]){
      count++;
      i+=2;
    }
    else if(s[i]==s[i+1])
      i++;
  }
  cout<<count<<endl;
  }
  return 0;
}
