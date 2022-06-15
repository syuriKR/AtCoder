#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main(){
    int n;
    cin >> n;

    int vec[n][n];
    rep(i,0,n){
        rep(j,0,n){
            vec[i][j] = 0;
        }
    }

    // 左行を指定
    rep(i,0,n){
        vec[i][0]=1;
    }

    rep(i,1,n){
        rep(j,1,n){
            vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
        }
    }

    rep(i,0,n){
        rep(j,0,i+1){
            cout << vec[i][j] << endl;
        }
    }
    return 0;
}