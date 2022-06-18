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
    ll x,a,d,n;
    cin >> x >> a >> d >> n;

    // 公差が負の場合、初項を変えて公差を正にする。
    if(d<0){
        ll fi = a+d*(n-1);
        a = fi;
        d*=-1;
    }

    // 二部探索
    ll st = 0, fi = (n-1);
    while(st<=fi){
        ll te = (st+fi)/2;
        if( (a+d*te) < x ){
            st = te+1;
        }
        else{
            fi = te-1;
        }
    }

    // この時点でfi<st
    // 大体目安のfiを見つけてそこから最大前後5個範囲で探索している
    // 初めがマイナスにならないようにmax(0ll,st-5)
    // 終わりが項数を超えないようにmin((n-1),st+5)
    ll res = 8e18;
    for(ll i=max(0ll,st-5); i<=min( (n-1),st+5 ); i++){
        res = min(abs(a+d*i-x),res);
    }
    cout << res << endl;
    return 0;
}