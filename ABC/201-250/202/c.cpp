#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long>veca(n);
    vector<long long>vecb(n);
    vector<long long>vecc(n);
    vector<long long>vecd(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        veca[a-1]++;
    }
    for(int i=0; i<n; i++){
        cin >>vecb[i];
    }
    for(int i=0; i<n; i++){
        int c;
        cin >> c;
        vecc[c-1]++;
    }
    for(int i=0; i<n; i++){
        vecd[vecb[i]-1]+=vecc[i];
    }
    long long ans = 0;
    for(int i=0; i<n; i++){
        long long aj = veca[i]*vecd[i];
        ans+=aj;
    }
    cout << ans << endl;
}