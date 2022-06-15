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
    int r,c,a11,a12,a21,a22;
    cin >> r >> c >> a11 >> a12 >> a21 >> a22;

    if(r==1 && c==1)cout << a11 << endl;
    else if(r==1 && c==2)cout << a12 << endl;
    else if(r==2 && c==1)cout << a21 << endl;
    else cout << a22 << endl;

    return 0;
}