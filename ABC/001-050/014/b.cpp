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
    int n,x;
    cin >> n >> x;

    int ans = 0;
    rep(i,0,n){
        int a;
        cin >> a;
        // xを毎回一個左にシフトさせ1のビット列(一番右のみ1のビット)と&でif
        // 1の一番右のbitが1より、xの一番右のbitが1の場合true、0の場合false
        if(x >> i & 1){
            ans+=a;
        }
    }
    cout << ans << endl;
}