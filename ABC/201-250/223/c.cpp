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

    vector<pair<double,double>>vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i].first >> vec[i].second;
    }

    double time = 0;

    for(int i=0; i<n; i++){
        time+=vec[i].first/vec[i].second/2;
    }

    double ans = 0;

    for(int i=0; i<n; i++){
        if(time<=0)break;
        ans+=vec[i].first*min(1.0,time/ (vec[i].first/vec[i].second) );
        time-=vec[i].first/vec[i].second;
    }

    cout << fixed << setprecision(10) << ans << endl;
}