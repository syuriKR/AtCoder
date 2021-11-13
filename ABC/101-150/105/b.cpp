#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<50; i++){
        for(int k=0; k<50; k++){
            if(4*i+7*k==n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}