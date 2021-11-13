#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sizes = s.size();
    reverse(s.begin(),s.end());
    for(int i=0; i<sizes; i++){
        if(s[i]=='6'){
            s[i]='9';
        }
        else if(s[i]=='9'){
            s[i]='6';
        }
    }
    cout << s << endl;
}