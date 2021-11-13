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
    rep(i,0,n)cin>>vec[i];

    int ans = 0;

    for(int l=0; l<n; l++){
        int x = vec[l];
        for(int r=l; r<n; r++){
            x = min(x,vec[r]);
            ans = max(ans,x*(r-l+1));
        }
    }

    cout << ans << endl;

}