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
    vector<int>high(n);
    vector<vector<int>>to(n);

    rep(i,0,n){
        cin >> high[i];
    }

    rep(i,0,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(to[i].size()==0){
            ans++;
        }
        else{
            bool judge = true;
            fore(a,to[i]){
                if(high[i]<=high[a]){
                    judge = false;
                    continue;
                }
            }
            if(judge)ans++;
        }
    }
    cout << ans << endl;
}