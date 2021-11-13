#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const ll mod = 1000000007;

ll powmod(ll x, ll y){
    ll res = 1;
    for(ll i=0; i<y; i++){
        res = res*x%mod;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    ll ans = powmod(10,n)-powmod(9,n)-powmod(9,n)+powmod(8,n);
    // mod以上の値になっている可能性があるので一度余りを取り直さないといけない。
    ans%=mod;
    // 余りを取っている以上ans自体がマイナスになっている可能性があるのでmodを足してもう一度余りを計算する
    ans = (ans+mod)%mod;
    cout << ans << endl;
}