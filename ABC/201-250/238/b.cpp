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

    vector<int>vec;
    vec.push_back(0);

    int rad = 0;
    rep(i,0,n){
        int a;
        cin >> a;
        rad += a;
        rad %= 360;
        vec.push_back(rad);     
    }
    sort(all(vec));

    int ans = 0;
    for(int i=0; i<n-1; i++){
        ans = max(ans,vec[i+1]-vec[i]);
    }
    ans = max(ans,vec[0]-vec[n]+360);

    cout << ans << endl;
}