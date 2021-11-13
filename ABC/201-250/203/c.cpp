#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin >> n >> k;
    vector<pair<long long,int>>veca(n);
    for(int i=0; i<n; i++){
        cin >> veca[i].first >> veca[i].second;
    }
    sort(veca.begin(),veca.end());

    long long ans=k;
    for(int i=0; i<n; i++){
        if(veca[i].first<=k){
            k+=veca[i].second;
            ans+=veca[i].second;
        }
        else{
            break;
        }
    }
    cout << ans << endl;
}