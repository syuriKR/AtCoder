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
    vector<double>vec(n);
    rep(i,0,n)cin>>vec[i];

    long long ans1=0;
    rep(i,0,n)ans1+=abs(vec[i]);

    double ans2=0;
    rep(i,0,n)ans2+=abs(vec[i])*abs(vec[i]);
    ans2 = sqrt(ans2);

    int ans3=0;
    rep(i,0,n){
        if(ans3<abs(vec[i]))ans3=abs(vec[i]);
    }

    cout << ans1 << endl;
    cout << fixed << setprecision(10)<< ans2 << endl;
    cout << ans3 << endl;
}