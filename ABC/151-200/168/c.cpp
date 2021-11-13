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
    int a,b,h,m;
    cin >> a >> b >> h >> m;

    const double pi = 3.141592653589793;
    long double kakudo = 0.5*(h*60+m)-6*m;
    if(kakudo==180){
        cout << a+b << endl;
        return 0;
    }
    if(kakudo>180)kakudo=360-kakudo;
    kakudo *= pi;
    kakudo/=180;

    long double ans = a*a+b*b-2*a*b*cos(kakudo);
    cout << fixed << setprecision(10) << sqrt(ans) << endl;
}