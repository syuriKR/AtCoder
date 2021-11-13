#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 100100100;
    vector<int>veca(n);
    vector<int>vecb(n);
    for(int i=0; i<n; i++){
        cin >> veca[i] >> vecb[i];
    }
    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(i==k){
                int time = veca[i]+vecb[i];
                ans = min(ans,time);
            }
            else{
                int time = max(veca[i],vecb[k]);
                ans = min(ans,time);
            }
        }
    }
    cout << ans << endl;
}