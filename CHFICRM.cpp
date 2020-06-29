#include <bits/stdc++.h>
using namespace std;

string solve(int n, int arr[]) {
    int i;
    int coins[3] = {0};
    for(i = 0; i < n; i++) {
        if(arr[i] == 5){
            coins[0]++;
        }
        else if(arr[i] == 10){
            if(coins[0] != 0){
                coins[0]--;
                coins[1]++;
            }
            else{
                return "NO\n";
            }
        }
        else {
            if(coins[1] == 0 && coins[0] < 2)
                return "NO\n";
            else if(coins[1] == 0 && coins[0] > 1){
                coins[0] -= 2;
                coins[2]++;
            }
            else{
                coins[1]--;
                coins[2]++;
            }
        }
    }
    return "YES\n";
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t, n, i, j, k, l;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    string ans = solve(n, arr);
	    cout << ans ;
	}
	return 0;
}
