#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string b;
    b = s;
    
    int size = s.size();
    reverse(s.begin(),s.end());

    if(b==s){
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0; i<=10; i++){
        s.push_back('0');
        string a = s;
        reverse(a.begin(),a.end());
        if(a==s){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}