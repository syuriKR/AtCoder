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
    double a,b,c,x;
    cin >> a >> b >> c >> x;

    if(x<=a){
        cout << fixed << setprecision(10) << 1 << endl;
        return 0;
    }

    else if(x<=b){
        cout << fixed << setprecision(10) << c/(b-a) << endl;
        return 0;
    }
    else{
        cout << fixed << setprecision(10) << 0 << endl;
        return 0;
    }
}