#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    vector<long long>vec(200);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        int y = x%1000;
        int z = y%200;
        vec[z]++;
    }
    for(int i=0; i<200; i++){
        ans += ( vec[i]*(vec[i]-1) ) / 2;
    }
    cout << ans << endl;
}