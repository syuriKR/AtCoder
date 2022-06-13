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

    string t;
    cin >> t;

    int x = 0;
    int y = 0;

    int d = 0;

    rep(i,0,n){
        if(t[i]=='S'){
            if(d==0)x++;
            if(d==1)y--;
            if(d==2)x--;
            if(d==3)y++;           
        }
        else{
            d = (d+1)%4;
        }
    }

    cout << x << ' ' << y << endl;
    return 0;
}