#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    string s;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a!=x){
            if(s.size()==0){
                s+=to_string(a);
            }
            else{
                s+=" ";
                s+=to_string(a);
            }
        }
    }
    cout << s << endl;
}