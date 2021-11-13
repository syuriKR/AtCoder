#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int k;
    cin >> n >> k;
    for(int i=0; i<k; i++){
        if(n%200==0){
            n/=200;
        }
        else{
            string s = to_string(n);
            s+="200";
            n = stoll(s);
        }
    }
    cout << n << endl;
}