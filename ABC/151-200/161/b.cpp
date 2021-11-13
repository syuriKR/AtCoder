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
    int n,m;
    cin >> n >> m;
    vector<int>vec(n);
    ll max = 0;
    rep(i,0,n){
        cin >> vec[i];
        max+=vec[i];
    }

    sort(all(vec));
    reverse(all(vec));

    for(int i=0; i<m; i++){
        if(vec[i]*4*m<max){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}