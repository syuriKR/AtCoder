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
    string a;
    cin >> a;
    set<char>set;
    set.insert(a[0]);
    set.insert(a[1]);
    set.insert(a[2]);

    int size = set.size();
    if(size == 3){
        cout << 6 << endl;
    }
    else if(size == 2){
        cout << 3 << endl;
    }
    else cout << 1 << endl;
}