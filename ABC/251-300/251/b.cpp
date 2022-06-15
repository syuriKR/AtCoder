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
    int n,w;
    cin >> n >> w;

    vector<int>vec(n);

    rep(i,0,n){
        cin >> vec[i];
    }

    set<int>s;

    rep(i,0,n){
        int weight = vec[i];
        if(weight<=w)s.insert(weight);
    }

    rep(i,0,n){
        rep(j,i+1,n){
            int weight = vec[i]+vec[j];
            if(weight<=w)s.insert(weight);
        }
    }

    rep(i,0,n){
        rep(j,i+1,n){
            rep(k,j+1,n){
                int weight = vec[i]+vec[j]+vec[k];
                if(weight<=w)s.insert(weight);
            }
        }
    }
    
    cout << s.size() << endl;
    return 0;
}