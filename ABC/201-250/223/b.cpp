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

    int size = s.size();
    string min = s;
    string max = s;

    for(int i=1; i<size; i++){
        string now = s.substr(i) + s.substr(0,i);
        if(min>now){
            min = now;
        }
        if(max<now){
            max = now;
        }
    }
    cout << min << endl;
    cout << max << endl;
}