#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin >> s;
    int size = s.size();
    for(int i=0; i<size; i+=2){
        ans += s[i];
    }
    cout << ans << endl;
}