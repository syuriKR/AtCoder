#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>vec(200);
    for(int i=0; i<n; i++){
        int x = i%200;
        vec[x]++;   
    }
}