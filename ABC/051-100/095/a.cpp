#include<bits/stdc++.h>
using namespace std;

int main(){
    int price = 700;
    string s;
    cin >> s;
    if(s[0]=='o'){
        price += 100;
    }
    if(s[1]=='o'){
        price += 100;
    }
    if(s[2]=='o'){
        price += 100;
    }
    cout << price << endl;
}