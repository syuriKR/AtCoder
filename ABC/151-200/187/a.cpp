#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;

    int ansa = (a[0]-'0') + (a[1]-'0') + (a[2]-'0');
    int ansb = (b[0]-'0') + (b[1]-'0') + (b[2]-'0');

    cout << max(ansa,ansb) << endl;
}