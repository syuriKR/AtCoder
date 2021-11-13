#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a,b,ab;
    int ansmax;
    string abstr;
    cin >> n;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            a = i;
            b = n/i;
        }
    }
    ab=max(a,b);
    abstr = to_string(ab);
    ansmax = abstr.size();
    cout << ansmax << endl;
}