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
    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    
    if(d<0){
        ll ok = a+d*(n-1);
        a = ok;
        d*=-1;
    }

    // めぐる式二部探索なら本来はng=-1
    // だが今回はa+d*ok(okが0の場合)でxを超える場合、a+d*ng(ngが-1の場合)で条件から外れる
    ll ng = -1,ok = n-1;
    while(abs(ok-ng)>1){
        ll mid = (ok+ng)/2;
        if( x <= (a+d*mid) ){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }

    // okは超える場合の最小値
    // それともう一つ、ng、つまり超えない場合の最大値について考える必要がある。
    // だがokが0、ngが-1の場合、問題の条件によりngは含まずokのみ考慮する必要がある。
    if(ng == -1){
        cout << abs(a+d*ok-x) << endl;
    }
    else{
        cout << min( abs(a+d*ok-x), abs(a+d*(ok-1)-x) ) << endl;
    }
    return 0;
}