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
    int n,q;
    cin >> n >> q;

    vector<int>height(n);
    vector<int>line(q);
    vector<int>ans(q);

    rep(i,0,n){
        cin >> height[i];
    }
    rep(i,0,q){
        cin >> line[i];
    }

    sort(all(height));

    // 改善する必要あり
    // rep(i,0,q){
    //     rep(j,0,n){
    //         if(height[j] >= line[i]){
    //             ans[i]++;
    //         }           
    //     }
    // }

    rep(i,0,q){
        auto iter = lower_bound(all(height),line[i]);
        ans[i] = height.end()-iter;
    }

    rep(i,0,q)cout << ans[i] << endl;
}