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
    ll n,w;
    cin >> n >> w;
    vector<pair<ll,ll>>pizza(n);
    for(int i=0; i<n; i++){
        cin >> pizza[i].first >> pizza[i].second;
    }
    sort(all(pizza));
    reverse(all(pizza));

    ll ans = 0;
    for(int i=0; i<n; i++){
        if(w<=0)break;
        ans+=pizza[i].first*min(w,pizza[i].second);
        w-=pizza[i].second;
    }
    cout << ans << endl;
}