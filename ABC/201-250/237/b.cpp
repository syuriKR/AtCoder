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
    int h,w;
    cin >> h >> w;

    vector<vector<int>>vec(h,vector<int>(w));

    vector<vector<int>>vec2(w,vector<int>(h));

    rep(i,0,h){
        rep(j,0,w){
            cin >> vec[i][j];
        }
    }

    rep(i,0,h){
        rep(j,0,w){
            vec2[j][i]=vec[i][j];
        }
    }

    rep(i,0,w){
        rep(j,0,h){
            cout << vec2[i][j] << endl;
        }
    }
}