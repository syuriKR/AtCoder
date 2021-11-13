#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int n,m;
// 道保存用の二次元
// vector<int>route[2020];　とも書けるっぽい。
vector<vector<int>>route(2020);

// BFS(幅優先探索)を利用
int main(){
    cin >> n >> m;
    rep(i,0,m){
        int a,b;
        cin>>a>>b;
        a--;b--;
        route[a].push_back(b);
    }

    int ans = 0;
    // 1からnまでのスタート地点ごとのループ
    rep(st,0,n){
        queue<int>que;
        set<int>vis;

        // queは処理の順番待ち列、visは到達地点の記録用
        que.push(st);
        vis.insert(st);

        // queが空になったらループ終了
        while(!que.empty()){
            int cu =que.front();
            que.pop();
            // route[cu]はcuと繋がっている道のリスト、一つずつ範囲for文を用いてtoという変数に入れる
            fore(to,route[cu]){
                // visに変数toがないならtrue、この場合一度も訪れていないならばtrueという意味
                if(!vis.count(to)){
                    que.push(to);
                    // 行ける街の一つとしてvisという名前のsetに入れる
                    vis.insert(to);
                }
            }
        }
        // 最後に一つのスタート地点から行ける到達地点をまとめたvisの要素数を数える
        ans+=vis.size();
    }
    cout << ans << endl;
}