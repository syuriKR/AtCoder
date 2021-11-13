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
    string s,t;
    cin >> s >> t;
    int cntmax = inf;
    for(int i=0; i<=s.size()-t.size(); i++){
        int cnt = 0;
        for(int j=0; j<t.size(); j++){
            if(s[i+j]!=t[j]){
                cnt++;
            }
        }
        chmin(cntmax,cnt);
    }
    cout << cntmax << endl;
}