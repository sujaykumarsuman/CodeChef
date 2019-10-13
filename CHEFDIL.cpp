#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string row;
        cin>>row;
        int cards = row.length();
        int i, o = 0, z = 0;
        for(i = 0; i < cards; i++){
            if(row[i] == '1')
                o++;
            else
                z++;
        }
        while(o>0){
            for(i = 0; i < cards; i++){
                if(row[i] == '1'){
                    row[i] = ' ';
                    o--;
                    if(i>0){
                        if(row[i-1] == '0'){
                            row[i-1] = '1';
                            o++;
                            z--;
                        }
                        else if(row[i-1] == '1'){
                            row[i-1] = '0';
                            z++;
                            o--;
                        }
                    }
                    if(i<cards){
                        if(row[i+1] == '0'){
                            row[i+1] = '1';
                            o++;
                            z--;
                        }
                        else if(row[i+1] == '1'){
                            row[i+1] = '0';
                            z++;
                            o--;
                        }
                    }
                }
            }
        }
        if(z>0)
            cout<<"LOSE\n";
        else
            cout<<"WIN\n";
    }
    return 0;
}
