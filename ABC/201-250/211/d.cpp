#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

vector<vector<int>>to;
int n,m;
const ll mod = 1000000007;

int main(){
    cin >> n >> m;
    to.resize(n);

    rep(i,0,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    // 1から各地点への距離を記録する配列
    vector<int>dist(n,inf);
    dist[0]=0;

    // 距離を求めるBFS
    queue<int>que;
    que.push(0);
    vector<int>vs;
    while(que.size()){
        int cu = que.front();
        vs.push_back(cu);
        que.pop();
        fore(city,to[cu]){
            if(dist[city]==inf){
                que.push(city);
                dist[city]=dist[cu]+1;
            }
            else continue;
        }
    }

    vector<ll>dp(n);
    dp[0]=1;
    fore(v,vs){
        fore(u,to[v]){
            if(dist[u]==dist[v]+1){
                dp[u]+=dp[v];
                // long longの範囲すらも超えるので途中で余りを取る必要あり。
                dp[u]%=mod;
            }
        }
    }
    ll ans = dp[n-1];
    cout << ans % mod << endl;
}