#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,a;
    int ans;
    double judgenow = 1e18;
    cin >> n >> t >> a;
    for(int i=1; i<=n; i++){
        double h;
        cin >> h;
        double judge =abs(a-(t-h*0.006));
        if(judge<judgenow){
            judgenow = judge;
            ans = i;
        }
    }
    cout << ans << endl;
}