#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<double>x(n);
    vector<double>y(n);

    for(int i=0; i<n; i++){
        cin >> x[i];
        cin >> y[i];
    }

    int ans = 0;

    for(int i=0; i<n; i++){
        for(int k=i+1;k<n; k++){
            double vec = (y[k]-y[i]) / (x[k]-x[i]);
            if( vec >= -1 && vec <= 1){
                ans++;
            }
        }
    }
    cout << ans << endl;
}