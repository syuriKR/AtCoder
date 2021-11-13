#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long>vec(401);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        a+=200;
        vec[a]++;
    }
    long long ans = 0;
    for(int i=0;i<401;i++){
        for(int k=i+1; k<401;k++){
            ans+=(k-i)*(k-i)*vec[k]*vec[i];
        }
    }
    cout << ans << endl;
}