#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int w,h;
int cnt;
int c[51][51];
bool judge[51][51];

void dfs(int h_now, int w_now){
    judge[h_now][w_now]=true;
    for(int dx=-1; dx<=1; dx++){
        for(int dy=-1; dy<=1; dy++){
            int nx = h_now+dx; int ny = w_now+dy;
            if(1<=nx && nx<=h && 1<=ny && ny<=w && !judge[nx][ny] && c[nx][ny]==1){
                dfs(nx,ny);
            }
        }
    }
}

int main(){
    while(true){
        cin >> w >> h;
        if(w==0 && h==0)return 0;

        // 入力は0か1、0なら海、1なら陸
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                cin >> c[i][j];
            }
        }
      


        // judgeを初期化
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                judge[i][j]=false;
            }
        }

        cnt = 0;
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                if(!judge[i][j] && c[i][j]==1){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}