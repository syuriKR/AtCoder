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
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int Takahashi,Aoki;

    // 周回する回数
    int TakahashiPhase = x/(a+c);
    int TakahashiLast = x-(a+c)*TakahashiPhase;

    Takahashi = TakahashiPhase*a*b + b*(min(TakahashiLast,a));

    int AokiPhase = x/(d+f);
    int AokiLast = x-(d+f)*AokiPhase;

    Aoki = AokiPhase*d*e + e*(min(AokiLast,d));

    if(Takahashi < Aoki){
        cout << "Aoki" << endl;
        return 0;
    }
    else if(Aoki < Takahashi){
        cout << "Takahashi" << endl;
        return 0;
    }
    else{
        cout << "Draw" << endl;
        return 0;
    }
}