#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    int amax=0;
    int bmin=1001;
    cin >> n;
    vector<int>veca(n);
    vector<int>vecb(n);
    for(int i=0; i<n; i++){
        cin >> a;
        amax=max(a,amax);      
    }
    for(int i=0; i<n; i++){
        cin >> b;
        bmin=min(b,bmin);         
    }
    if(amax>bmin){
        cout << 0 << endl;
    }
    else{
        cout << bmin-amax+1 << endl;
    }
}