#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    set<string>set;
    set.insert(a);
    set.insert(b);
    set.insert(c);
    set.insert(d);
    if(set.size()==4){
        cout <<"Yes" << endl;
    }else{
        cout <<"No" << endl;
    }
}