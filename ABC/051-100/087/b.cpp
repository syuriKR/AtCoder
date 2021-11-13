#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x;
    int ans = 0;
    cin >> a >> b >> c >> x;
    for(int i=0; i<=a; i++){
        for(int k=0; k<=b; k++){
            for(int j=0; j<=c; j++){
                if(500*i+100*k+50*j==x){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}