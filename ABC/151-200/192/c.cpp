#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    int k;
    cin >> n >> k;
    for(int i=0; i<k; i++){
        sort(n.begin(),n.end());
        string nz = n;
        reverse(nz.begin(),nz.end());
        int nint = stoi(nz)-stoi(n);
        n = to_string(nint);
    }
    cout << n << endl;
}