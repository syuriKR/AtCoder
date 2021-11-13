#include<bits/stdc++.h>
using namespace std;

int main(){
    const int mod = 1e9+7;
    int n;
    cin >> n;
    long long now = 1;
    for(int i=1; i<=n; i++){
        now = now*i%mod;
    }
    cout << now << endl;
}