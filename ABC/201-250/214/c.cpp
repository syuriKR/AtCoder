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
    int n;
    cin >> n;
    vector<int>s(n),t(n),dp(n);
    rep(i,0,n){
        cin >> s[i];
    }
    rep(i,0,n){
        cin >> t[i];
    }
    int mi = inf;

    rep(i,0,n){
        chmin(mi,t[i]);
        dp[i]=mi;
        mi+=s[i];
    }

    rep(i,0,n){
        chmin(mi,t[i]);
        chmin(dp[i],mi);
        mi+=s[i];
    }

    rep(i,0,n)cout<<dp[i]<<endl;
}