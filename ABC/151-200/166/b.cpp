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
    int n,k;
    cin >> n >> k;
    set<int>set;
    rep(i,0,k){
        int d;
        cin >> d;
        rep(j,0,d){
            int p;
            cin >> p;
            set.insert(p);
        }
    }
    int minusans = set.size();
    cout << n-minusans << endl;
}