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
int x[8];
int y[8];
int main(){
    cin >> n;
    rep(i,0,n)cin>>x[i]>>y[i];

    // ordは順列の組み合わせ、町が3つなら0,1,2
    vector<int>ord;
    rep(i,0,n)ord.push_back(i);

    long double sm = 0;

    // next_permutationでordを入れ替える、町が3つなら012,021,102,120,201,210という感じに。
    // next_permutationは先にソートしておく必要がある。
    do{
        rep(i,0,n-1){
            int a = ord[i];
            int b = ord[i+1];

            long double dx = x[a]-x[b];
            long double dy = y[a]-y[b];

            sm += sqrt(dx*dx+dy*dy);
        }
    }
    while(next_permutation(all(ord)));

    rep(i,0,n)sm/=i+1;
    cout << fixed << setprecision(10) << sm << endl;
}