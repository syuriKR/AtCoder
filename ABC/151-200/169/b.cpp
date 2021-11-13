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
    vector<ll>a(n);

    rep(i,0,n){
        ll num;
        cin >> num;
        if(num==0){
            cout << 0 << endl;
            return 0;
        }
        else a[i]=num;
    }

    ll const infmax = 1000000000000000000;

    ll ans = 1;
    rep(i,0,n){
        if(infmax/ans<a[i]){
            cout << -1 << endl;
            return 0;
        }
        else ans*=a[i];
    }
    cout << ans << endl;
}