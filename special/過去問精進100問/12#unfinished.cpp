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
// https://atcoder.jp/contests/abc002/tasks/abc002_4

int n,m;
bool judge[12];
bool re[12][12];

int main(){
    // 入力
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int first,second;
        cin >> first >> second;
        first--;second--;
        re[first][second]=re[second][first]=true;
    }

    int ans = 0;

    // N人のうち派閥に入っているか入っていないかをbit全探索
    for(int bit=0; bit< (1<<n); bit++){
        // 派閥に参加している人数をbitから数える
        int t = bitset<32>(bit).count();
        if(t<=ans)continue;

        bool ok = true;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                // !re[i][j]の時は関係がないときtrue
                // 関係がないかつiとjが存在しているときはfalseになる。
                if(bit>>i & bit>>j & 1 && !re[i][j]){
                    ok = false;
                }
            }
        }
        if(ok)ans = t;
    }
    cout << ans << endl;
}
        // for(int i=0; i<n; i++)judge[i]=false;
        // ok = true;
        // for(int i=0; i<n; i++){
        //     if(bit & (1<<i)){
        //         judge[i]=true;
        //     }
        // }

        // for(int i=0; i<m; i++){
        //     if(judge[re[i].first]==true && judge[re[i].second]==true){
        //         continue;
        //     }
        //     else{
        //         ok = false;
        //         break;
        //     }
        // }

        // int nowcnt = 0;
        // if(ok){
        //     for(int i=0; i<n; i++){
        //         if(judge[i])nowcnt++;
        //     }
        // }
        // chmax(cnt,nowcnt);
