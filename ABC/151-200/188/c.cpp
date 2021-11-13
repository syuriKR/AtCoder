#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int N = 1;

    for(int i=0; i<n; i++){
        N*=2;
    }

    int amax = 0;
    int aid;
    for(int i=0; i<N/2; i++){
        int a;
        cin >> a;
        if(amax<a){
            amax = max(a,amax);
            aid = i+1;
        }
    }

    int bmax = 0;
    int bid;
    for(int i=N/2; i<N; i++){
        int b;
        cin >> b;
        if(bmax<b){
            bmax = max(b,bmax);
            bid = i+1;
        }
    }

    if(amax<bmax){
        cout << aid << endl;
    }
    else{
        cout << bid << endl;
    }
}