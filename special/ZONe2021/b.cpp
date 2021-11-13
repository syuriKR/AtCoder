#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double d,h,ans;
    double ansmax = 0;
    cin >> n >> d >> h;
    for(int i=0; i<n; i++){
        double dbuild,hbuild;
        cin >> dbuild >> hbuild;
        ans = h - ( (h-hbuild) / (d-dbuild) ) * d;
        ansmax = max(ansmax,ans);
    }
    cout << ansmax << endl;
}