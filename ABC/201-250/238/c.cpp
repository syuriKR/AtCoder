#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int fx(int x){
    string str = to_string(x);
    int size = str.size();

    ll min = 1;
    rep(i,0,size-1){
        min*=10;
    }
    
    int ans = x-min+1;
    return ans;
}

int main(){
    ll n;
    cin >> n;

    ll ans = 0;

    // 最大10^18のループ、短縮する必要あり
    for(ll i=1; i<=n; i++){
        ans += fx(i);
        ans%=998244353;
    }
    cout << ans << endl;
}