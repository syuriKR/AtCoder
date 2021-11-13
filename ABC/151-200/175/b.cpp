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

    ll ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                vector<int>judge(3);
                judge[0] = vec[i];
                judge[1] = vec[j];
                judge[2] = vec[k];
                sort(all(judge));
                if(judge[0]!=judge[1] && judge[1] !=judge[2]){
                    if(judge[0]+judge[1]>judge[2])ans++;
                }
                else continue;
            }
        }
    }
    cout << ans << endl;
}