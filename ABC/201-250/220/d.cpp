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
    vector<int>vec(10);
    int n;
    cin >> n;
    vector<int>num(n);
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int srt = num[0];
    for(int i=1; i<n; i++){
        vec[(0+num[i])%10]+=vec[0];
    }
}