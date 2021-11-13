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
    int k,n;
    cin >> k >> n;
    vector<int>vec(n);
    rep(i,0,n)cin>>vec[i];

    int ans = vec[n-1]-vec[0];
    // 時計回りで回ること前提、出発地点だけを変えていく
    // https://blog.hamayanhamayan.com/entry/2020/03/29/034804
    rep(i,1,n){
        int i_to_start = k-vec[i];
        int start_to_i1 = vec[i-1];
        chmin(ans,i_to_start+start_to_i1);
    }
    cout << ans << endl;
}