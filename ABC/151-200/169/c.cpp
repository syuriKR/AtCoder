#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// https://drken1215.hatenablog.com/entry/2020/05/31/224300
int main(){
    long long a;
    long double b;
    cin >> a >> b;
    // 微小値を足す
    // (long doubleをlong longにキャストするときに内部処理で値が微妙にずれるため)
    cout << ll(a*(b*100)/100)+0.001 << endl;
}

