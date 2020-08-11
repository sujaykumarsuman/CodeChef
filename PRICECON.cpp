#include <iostream>
#include<vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=0;
    int n=0,k=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> a;
        a.reserve(10000);
        for(int i=0;i<n;i++){
        	int num;
        	cin>>num;
        	a.push_back(num);
        }
        long long sum=0;
        long long rev=0;
        for(int i=0;i<a.size();i++)
        {
        if(a[i]>=k){
              rev+=k;
            }
        else
            rev+=a[i];
        sum+=a[i];
        }
          cout<<sum-rev<<endl;
    }
}
