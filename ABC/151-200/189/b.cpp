#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    double perall = 0;
    for(int i=0; i<n; i++){
        double v,p;
        cin >> v >> p;
        double per = v*p;
        perall += per;
        if(perall>x*100){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}