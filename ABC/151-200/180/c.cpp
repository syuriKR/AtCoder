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
    ll n;
    cin >> n;
    // vectorだと同じものが二つ入る可能性があるからダメ(36=6*6など二乗の時)
    set<ll>vec;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            vec.insert(i);
            vec.insert(n/i);
        }
    }
    fore(num,vec)cout<<num<<endl;
}