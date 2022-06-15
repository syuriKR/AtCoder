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
    int n,k;
    cin >> n >> k;

    vector<int>light(k);
    rep(i,0,k){
        cin >> light[i];
        light[i]--;
    }

    vector<pair<ll,ll>>xy(n);
    rep(i,0,n){
        cin >> xy[i].first >> xy[i].second;
    }

    ll res = 0;
    
    // 全ての人に対して各光源との距離を求め、最寄りの光源との最短距離を保存する。
    rep(i,0,n){
        ll dis = 100100100100100100;
        fore(a,light){
            dis = min(dis, (xy[i].first-xy[a].first)*(xy[i].first-xy[a].first) + (xy[i].second-xy[a].second)*(xy[i].second-xy[a].second) );
        }

        // 最短距離の中から最も距離が遠いものを見つける。
        res = max(res,dis);
    }

    cout << fixed << setprecision(10) << sqrt(double(res)) << endl;
}