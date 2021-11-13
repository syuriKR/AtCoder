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
    vector<vector<int>>honests(15);
    vector<vector<int>>liars(15);

    rep(i,0,n){
        int a; cin>>a;
        rep(j,0,a){
            int x,y; cin >> x >> y;
            if(y==0)liars[i].push_back(x-1);
            else honests[i].push_back(x-1);
        }
    }

    int ans = 0;
    rep(msk,0, 1<<n){
        bool ok = true;
        int tot = 0;
        rep(i,0,n){
            if(msk & (1<<i) ){
            }
        }
    }
}