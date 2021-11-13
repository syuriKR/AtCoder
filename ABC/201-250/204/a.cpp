#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >>b;
    int ans;
    if(a==b){
        ans = a;
    }
    else{
        ans = 3-a-b;
    }
    cout << ans << endl;
}