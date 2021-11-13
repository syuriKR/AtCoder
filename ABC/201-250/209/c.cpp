#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    long long ans = 1;
    for(int i=0; i<n; i++){
        ans = ans*max(0,vec[i]-i) % 1000000007;
    }
    cout << ans << endl;
}