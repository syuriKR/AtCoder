#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int i=1;
    while(ans<n){
        ans+=i;
        i+=1;
    }
    cout << i-1 << endl;
}