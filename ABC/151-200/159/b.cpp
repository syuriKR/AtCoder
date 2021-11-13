#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main(){
    string s;
    cin >> s;

    string a1 = s;
    reverse(all(a1));
    if(s != a1){
        cout << "No" << endl;
        return 0;
    }

    string a2,a3;
    int n = s.size();
    rep(i,0,(n-1)/2){
        a2+=(s[i]);
        a3+=(a1[i]);
    }

    string a4 = a2;
    string a5 = a3;
    reverse(all(a4));
    reverse(all(a5));
    if(a2!=a4){
        cout << "No" << endl;
        return 0;
    }
    if(a3!=a5){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
}