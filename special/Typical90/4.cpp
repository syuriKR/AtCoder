#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int h,w;
int A[2009][2009];
int tate[2009];
int yoko[2009];
int sum[2009][2009];

int main(){
    // 入力
    // int h,w;
    cin >> h >> w;
    // vector<vector<int>>data(h,vector<int>(w));
    rep(i,0,h){
        rep(j,0,w){
            scanf("%d",&A[i][j]);
        }
    }

    // 横一列の合計
    // vector<int>yoko(h);
    // 縦一列の合計
    // vector<int>tate(w);
    rep(i,0,h){
        rep(j,0,w){
            yoko[i] += A[i][j];
            tate[j] += A[i][j];
        }
    }

    // vector<vector<int>>sum(h,vector<int>(w));
    rep(i,0,h){
        rep(j,0,w){
            sum[i][j] = yoko[i] + tate[j] - A[i][j];
        }
    }

    // 出力
    // coutよりprintfのほうが速度早い
    rep(i,0,h){
        rep(j,0,w){
            if(j>=1)printf(" ");
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
}