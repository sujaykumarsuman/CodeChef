#include<bits/stdc++.h>
using namespace std;
int compare(const void* a, const void* b) {
	const int* x = (int*) a;
	const int* y = (int*) b;
	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;
	return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(int),compare);
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
