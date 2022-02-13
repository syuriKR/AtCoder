#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int n;

int main(){
    cin >> n;
    vector<int>p(n),q(n);
    rep(i,0,n)cin >> p[i];
    rep(i,0,n)cin >> q[i];

    vector<int>vec(n);
    rep(i,0,n)vec[i]=i+1;

    int pcnt,qcnt;

    int cnt = 1;
    do{
        if(p==vec)pcnt = cnt;
        if(q==vec)qcnt = cnt;
        cnt++;
    }
    while(next_permutation(all(vec)));
    cout << abs(pcnt-qcnt) <<endl;
}