#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// https://qiita.com/e869120/items/eb50fdaece12be418faa#2-3-%E5%88%86%E9%87%8E%E5%88%A5%E5%88%9D%E4%B8%AD%E7%B4%9A%E8%80%85%E3%81%8C%E8%A7%A3%E3%81%8F%E3%81%B9%E3%81%8D%E9%81%8E%E5%8E%BB%E5%95%8F%E7%B2%BE%E9%81%B8-100-%E5%95%8F
// https://atcoder.jp/contests/abc128/tasks/abc128_c

int n,m;
vector<int>slist[10];
int p[10];

int main(){
    // 入力
    // n個のスイッチ、m個の電球
    cin >> n >> m;
    rep(i,0,m){
        // 各電球が繋がっているスイッチの数k個
        int k;
        cin >> k;
        // 各電球が繋がっているスイッチの番号をリストに入れる
        rep(j,0,k){
            int s;
            cin >> s;
            s--;
            slist[i].push_back(s);
        }
    }

    // p[i]は0か1
    rep(i,0,m){
        cin >> p[i];
    }

    int ans = 0;
    // n個のスイッチが点いているかいないかのパターンをbit全探索で探索したい。
    for(int bit = 0; bit< (1<<n); bit++){
        // 条件満たしている電球の個数
        int ok = 0;
        // 各電球について
        for(int i=0; i<m; i++){
            int cnt = 0;
            // 各電球のスイッチのリストを取り出す
            fore(S,slist[i]){
                // スイッチがonのときcnt++
                if(bit & (1<<S) ){
                    cnt++;
                }
            }
            // cntの余りが条件を満たすとき、条件を満たす電球の個数を示す変数okを++
            if(cnt % 2 == p[i]){
                ok++;
            }
        }
        // if文
        if(ok==m)ans++;
    }
    cout << ans << endl;
}
