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
// https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_c

int n,m;
ll points[101][101];

int main(){
    // n人の生徒、m個の曲
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> points[i][j];
        }
    }

    // どの曲を選ぶか
    ll all = 0;
    for(int i=1; i<=m; i++){
        for(int j=i+1; j<=m; j++){
            ll now = 0;
            // グループn人が歌う
            for(int k=1; k<=n; k++){
                // k番目の人がiとjの曲を歌った時の高いほう
                now += max(points[k][i],points[k][j]);
            }
            chmax(all,now);
        }
    }
    cout << all << endl;
}