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
    int l,r;
    string s;
    
    cin >> l >> r >> s;

    int strsize = s.size();
    
    string ans;
    string rev;

    for(int i=0; i<l-1; i++){
        ans+=s[i];
    }

    for(int i=l-1; i<r; i++){
        rev+=s[i];
    }
    reverse(all(rev));
    ans+=rev;

    for(int i=r; i<strsize; i++){
        ans+=s[i];
    }

    cout << ans << endl;
    return 0;
}