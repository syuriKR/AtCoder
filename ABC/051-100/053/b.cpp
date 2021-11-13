#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int start,end;
    int size = s.size();
    for(int i=0; i<size; i++){
        if(s[i]=='A'){
            start = i;
            break;
        }
    }
    for(int i=size-1; 0<=i; i--){
        if(s[i]=='Z'){
            end = i;
            break;
        }
    }
    cout << end-start+1 << endl;
}