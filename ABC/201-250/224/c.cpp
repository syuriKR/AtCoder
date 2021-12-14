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

    vector<pair<int,int>>vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i].first >> vec[i].second;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if( (vec[j].second-vec[i].second)*(vec[k].first-vec[i].first) != (vec[j].first-vec[i].first)*(vec[k].second-vec[i].second) ){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}