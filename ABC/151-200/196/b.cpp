#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size = s.size();
    string ans;
    for(int i=0; i<size; i++){
        if(s[i]=='.'){
            cout << ans << endl;
            return 0;
        }
        else{
            ans += s[i];
        }
    }
    cout << s << endl;
}