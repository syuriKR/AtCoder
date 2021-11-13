#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    int ans1,ans2,ans3;
    ans1 = a*x+b*y;
    ans2 = c*max(x,y)*2;
    ans3 = c*min(x,y)*2+a*max(x-y,0)+b*max(y-x,0);
    cout << min({ans1,ans2,ans3}) << endl;
}