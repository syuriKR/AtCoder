#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin >> p;

    int fac[20];

    fac[0]=1;
    for(int i=1; i<=10; i++){
        fac[i]=fac[i-1]*i;
    }
    int answer=0;

    for(int i=10; i>=1; i--){
        while(p>=fac[i]){
            answer++;
            p -= fac[i];
        }
    }

    cout << answer << endl;
}