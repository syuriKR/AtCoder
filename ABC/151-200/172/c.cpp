#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int N, M, K, A[201010], B[201010];
ll Atot[201010], Btot[201010];
// 尺取り法...?
int main(){

    cin >> N >> M >> K;

    rep(i,0,N){
        cin >> A[i];
    }
    rep(i,0,M){
        cin >> B[i];
    }

    Atot[0]=0;
    rep(i,0,N)Atot[i+1]=Atot[i]+A[i];
    Btot[0]=0;
    rep(i,0,M)Btot[i+1]=Btot[i]+B[i];

    int ans = 0;
    int ok = M;
    // 初めはAが0冊Bがm冊の状態から処理していく
    rep(a,0,N+1){
        // 机Aのa冊に関してはfor文で回して処理する。
        // 机Aからa冊、机Bからok冊読んだときそれがk分以上ならokを減らしていく
        while(0<=ok && K<Atot[a]+Btot[ok])ok--;
        // ansを更新
        if(0<=ok)chmax(ans,a+ok);
    }
    cout << ans << endl;
}