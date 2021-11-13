#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// オイラーツアー(Euler Tour)

// 道保存用202020*0の二次元配列
vector<vector<int>>to;

// 深さ優先探索
// 親(元来たところ)に戻る再帰をしてほしくないから親の番号を引数につける
vector<int>ans;
void dfs(int v,int p=-1){
    ans.push_back(v);
    fore(u,to[v]){
        if(u==p)continue;
        dfs(u,v);
        ans.push_back(v);
    }
}

int main(){
    int n;
    cin >> n;
    to.resize(n);
    rep(i,0,n-1){
        int a,b;
        cin >> a >> b;
        a--;b--;
        // 相互に行き来できるため
        to[a].push_back(b);
        to[b].push_back(a);
    }

    // sortすることで小さい順に訪れるというのを簡単に処理できる
    rep(i,0,n)sort(all(to[i]));

    dfs(0);
    // 一度取り扱いやすいように入力の段階で全て-1したので+1する
    fore(v,ans)cout<<v+1<<endl;
}