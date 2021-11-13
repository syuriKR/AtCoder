#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<double>l(n),r(n);
    for(int i=0; i<n; i++){
        int t;
        cin >> t >> l[i] >> r[i];
        if(t==2){
            r[i]-=0.5;
        }
        if(t==3){
            l[i]+=0.5;
        }
        if(t==4){
            r[i]-=0.5;
            l[i]+=0.5;
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(max(l[i],l[j]) <= min(r[i],r[j])){
                ans++;
            }
        }
    }
    cout << ans << endl;
}