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
    vector<int>vec(n);
    ll ansall = 0;
    rep(i,0,n){
        int a;
        cin >> a;
        vec[i]=a;
        ansall += a;
    }
    ll x;
    cin >> x;

    ll rex = x/ansall;
    ll nowans = rex*ansall;
    ll cnt = 0;
    fore(a,vec){
        cnt++;
        nowans += a;
        if(nowans>x){
            cout << n*rex + cnt;
            return 0;
        }
    }
}