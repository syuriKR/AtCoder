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
    string s;
    cin >> s;
    int  size = s.size();
    size--;
    if(s[size]=='2' || s[size]=='4' || s[size]=='5' || s[size]=='7' || s[size]=='9'){
        cout <<"hon"<<endl;
    }
    else if(s[size]=='0' || s[size]=='1' || s[size]=='6' || s[size]=='8'){
        cout <<"pon"<<endl;
    }
    else cout <<"bon"<<endl;
}