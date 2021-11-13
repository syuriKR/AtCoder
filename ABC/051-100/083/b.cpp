#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,judge,nowi;
    int ans = 0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++){
        nowi = i;
        judge = 0;
        while(nowi>0){
            judge += nowi%10;
            nowi/=10;
        }
        if(a<=judge && judge<=b){
            ans += i;
        }
    }
    cout << ans << endl;
}