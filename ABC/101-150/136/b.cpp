#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        string sn = to_string(i);
        if(sn.size()%2==1){
            ans++;
        }
    }
    cout << ans << endl;
}