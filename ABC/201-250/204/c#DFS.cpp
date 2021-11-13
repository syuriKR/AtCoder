#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// 到達地点判断用
bool judge[2020];

// 出発地点、到着地点をメモするための配列
vector<vector<int>>route(2020);

// 再起関数
void dfs(int v){
    // 既にスタート地点として処理したところならreturn、二度同じところからスタートしない。
    if(judge[v])return;
    // 到達したところをtrue
    judge[v]=true;
    // 範囲for文で入力vと繋がる道を変数toに一つずつ代入、再びスタート地点としてtoを再起関数に送る
    fore(to,route[v])dfs(to);
}

int n,m;

int main(){
    cin >> n >> m;
    rep(i,0,m){
        int a,b;
        cin >> a >> b;
        route[a-1].push_back(b-1);
    }

    // スタート地点
    int ans = 0;
    rep(i,0,n){
        // 判別するためのjudgeを初期化
        rep(j,0,n)judge[j]=false;
        // スタート地点ごとに上の再起関数を適用
        dfs(i);
        rep(j,0,n)if(judge[j]==true)ans++;
    }
    cout << ans << endl;
}