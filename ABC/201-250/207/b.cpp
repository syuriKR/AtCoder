#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b>=c*d){
        cout << -1 << endl;
        return 0;
    }

    long long blue = a;
    long long red = 0;
    long long count=0;
    while(red*d<blue){
        blue+=b;
        red+=c;
        count++;
    }
    cout << count << endl;
}