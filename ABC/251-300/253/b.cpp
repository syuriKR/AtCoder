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

    char vec[100][100];
    rep(i,0,h){
        rep(j,0,w){
            cin >> vec[i][j];
        }
    }

    int h1,h2,w1,w2;
    bool judge = true;

    rep(i,0,h){
        rep(j,0,w){
            if(vec[i][j]=='o'){
                if(judge){
                    h1 = i;
                    w1 = j;
                    judge = !judge;
                }
                else{
                    h2 = i;
                    w2 = j;
                }
            }
        }
    }
    cout << abs(h1-h2) + abs(w1-w2) << endl;
    return 0;
}