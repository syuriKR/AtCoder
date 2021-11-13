#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ansnow;
    int ans=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            continue;
        }
        ansnow = 0;
        for(int k=1; k<=i; k++){
            if(i%k==0){
                ansnow++;
            }
        }
        if(ansnow == 8){
            ans++;
        }
    }
    cout << ans << endl;
}