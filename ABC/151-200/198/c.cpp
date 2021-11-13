#include<bits/stdc++.h>
using namespace std;

int main(){
    double r,x,y;
    cin >> r >> x >> y;

    double distance = sqrt(x*x+y*y);
    int ans = ceil(distance/r);
    if(ans == 1 && distance!=r){
        ans++;
    }
    
    cout << ans << endl;
}