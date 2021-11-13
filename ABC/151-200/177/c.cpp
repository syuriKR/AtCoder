#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const int mod = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<ll>vec(n);
    ll numall = 0;
    rep(i,0,n){
        cin >> vec[i];
        numall += vec[i];
        numall%=mod;
    }

    ll ans = 0;
    for(int i=0; i<n; i++){
        numall -= vec[i];
        if(numall<0)numall+=mod;
        ans += vec[i]*numall;
        ans %= mod;
    }
    cout << ans << endl;
}