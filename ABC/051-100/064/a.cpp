#include<bits/stdc++.h>
using namespace std;

int main(){
    string r,g,b;
    cin >> r >> g >> b;
    int judge = stoi(g+b);
    if(judge%4==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}