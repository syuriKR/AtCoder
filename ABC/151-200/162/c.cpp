#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int gcd(int x, int y) {
    if(x % y == 0) {
        return y;
    } else {
        return gcd(y, x % y); 
        //x%y==0でないときはユーグリットの互除法を使って再帰的に関数を呼び出す。
    }
}

int main(){
    int k;
    cin >> k;
    ll ans = 0;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k; j++){
            for(int l=1; l<=k; l++){
                ans+=gcd(gcd(i,j),l);
            }
        }
    }
    cout << ans << endl;
}