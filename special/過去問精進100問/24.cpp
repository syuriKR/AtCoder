#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

vector<int>startP(101);
vector<int>endP(101);
vector<bool>seen(101);

int cnt = 1;

void dfs(vector<vector<int>>vec, int startnum){
    seen[startnum]=true;
    startP[startnum] = cnt;
    cnt++;

    fore(next_num,vec[startnum]){
        if(seen[next_num])continue;
        dfs(vec,next_num);
    }
    endP[startnum]=cnt;
    cnt++;
}

int main(){
    // 入力
    // 頂点の数
    int n;
    cin>>n;

    // 頂点と繋がっている頂点の情報を二次元配列に入力する
    vector<vector<int>>vec(101);
    for(int i=1; i<=n; i++){
        // uは頂点の番号、kはその頂点が繋がっている他頂点の数
        int u,k;
        cin >> u >> k;
        for(int j=0; j<k; j++){
            int a;
            cin >> a;
            vec[i].push_back(a);
        }
    }

    // 最初に訪問する頂点は1、そこから深さ優先探索に基づき探索する
    // 探索する頂点に複数候補があるときは番号の小さい順に

    // 訪問したかを判断するseenを初期化
    for(int i=0; i<=100; i++)seen[i]=false;

    // 深さ優先探索
    dfs(vec,1);

    // 出力
    // 頂点の番号、その頂点の発見時刻、その頂点の完了時刻を空白区切りで
    for(int i=1; i<=n; i++){
        cout << i << " " << startP[i] << " " << endP[i] << endl;
    }
}