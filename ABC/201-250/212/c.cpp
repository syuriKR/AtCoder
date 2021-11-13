#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int cntA = 0;
    int cntB = 0;

    // 10^9までの範囲だから100100100だとminで判定できない範囲がある。
    int ans = 1001001000;

    // while(cntA<n && cntB<m){
    //     ans = min(ans,abs(a[cntA]-b[cntB]));
    //     if(a[cntA]>b[cntB]) cntB++;
    //     else cntA++;
    // }
    for(int i=0; i<n+m; i++){
        ans = min(ans,abs(a[cntA]-b[cntB]));
        if(cntA>n-1){
            break;
        }
        else if(cntB>m-1){
            break;
        }
        else if(a[cntA]>=b[cntB]){
            cntB++;
        }
        else cntA++;
    }
    cout << ans << endl;
}