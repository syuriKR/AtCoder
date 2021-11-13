#include<bits/stdc++.h>
using namespace std;

int main(){
    bool judge = false;
    int n;
    cin >> n;
    for(int i=1; i<=9; i++){
        if(n%i==0 && n/i<=9 && n/i>=1){
            judge = true;
        }
    }
    if(judge){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}