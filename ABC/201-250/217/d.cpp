#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// かなり強引だから解きなおすべき
int main(){
    int l,q;
    cin >> l >> q;
    // vecに木の右端の長さを記録する
    set<int>vec;
    vec.insert(0);
    vec.insert(l);
    rep(i,0,q){
        int c,x;
        cin >> c >> x;
        if(c==1){
            vec.insert(x);
        }
        else{
            auto a = vec.lower_bound(x);
            auto b = a;
            a--;

            cout << *b-*a << endl;
        }
    }
}