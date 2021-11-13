#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int finans = 1001001000;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(c>a){
            int ans = b;
            finans = min(ans,finans);
        }
    }
    if(finans == 1001001000){
        cout << -1 << endl;
        return 0;
    }
    cout << finans << endl;
}