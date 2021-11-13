#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,y;
    cin >> n >> y;
    for(int i=0; i<=n; i++){
        for(int k=0; k<=n-i; k++){
            if( (y-10000*i-5000*k) == 1000*(n-i-k) ){
                cout << i << " " << k << " " << (y-10000*i-5000*k)/1000 << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}