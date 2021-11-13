#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int ans = 0;
    for(int i=0; i<=2; i++){
        if(a[i]=='1'){
            ans++;
        }
    }
    cout << ans << endl;
}