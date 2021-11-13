#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    int price = 0;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        price+=a;
    }
    int minus = n/2;
    int result = price - minus;
    if(result > x){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}