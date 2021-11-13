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
    long long x,k,d;
    cin >> x >> k >> d;

    // if(abs(x)>=k*d) とすると、k*dがlong longの範囲も超えて狂う。
    if(abs(x)/k>=d){
        if(x<0) x+=k*d;
        else x-=k*d;
    }

    else{
        ll a = abs(x)/d;
        if( (k-a) % 2 == 0){
            if(x<0)x+=d*a;
            else x-=d*a;
        }
        else{
            if(x<0)x+=d*(a+1);
            else x-=d*(a+1);
        }
    }

    cout << abs(x) << endl;
}