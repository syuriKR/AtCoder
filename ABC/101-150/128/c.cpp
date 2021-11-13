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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>s(10);
    vector<int>judge(10);


    for(int i=0; i<m; i++){
        int k; cin >> k;
        rep(j,0,k){
            int a; cin >> a; a--;
            s[i].push_back(a);
        }
    }

    rep(i,0,m)cin>>judge[i];

    int ans = 0;
    // mskが0から2のn乗未満のfor文, n個のbitのon/offで全探索
    // repマクロで、2のn乗通りの全てのon/offパターンを探索
    rep(msk,0,1<<n){
        int ok = 0;
        // m個の電球それぞれについて全探索
        rep(i,0,m){
            int cnt = 0;
            // m個の電球から一つ選び、その一つが繋がっているスイッチを全探索
            fore(s,s[i]){
                // スイッチがオンならcnt++
                if(msk& (1<<s) )cnt++;
            }
            // 一つの電球に関するスイッチがオンの数を調べ終わった後それの余りを求める
            if(cnt%2==judge[i])ok++;
        }
        if(ok == m)ans++;
    }
    cout << ans << endl;
}