#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a>0 && b>0){
        cout << "Alloy" << endl;
    }
    else if(a>0 && b==0){
        cout << "Gold" << endl;
    }
    else{
        cout << "Silver" << endl;
    }
}