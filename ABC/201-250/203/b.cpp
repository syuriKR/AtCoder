#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int ans=0;
    for(int i=1;i<=m;i++){
        for(int k=1;k<=n; k++){
            ans+=100*k+1*i;
        }
    }
    cout << ans << endl;
}