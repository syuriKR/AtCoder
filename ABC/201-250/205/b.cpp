#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>map;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        map.insert(a);
    }
    if(n==map.size()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}