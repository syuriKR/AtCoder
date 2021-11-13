#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int ans = 1;
    cin >> n;
    int judgenow = 0;
    for(int i=1; i<=n; i++){
        int judge = 0;
        int k = i;
        while(k%2==0){
            k/=2;
            judge++;
        }
        if(judge>judgenow){
            judgenow = judge;
            ans = i;
        }
    }
    cout << ans << endl;
}