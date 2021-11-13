#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,x,y;
    cin >> n >> a >> x >> y;
    if(n<a){
        cout << x*n << endl;
    }
    else{
        cout << x*a+y*(n-a) << endl;
    }
}