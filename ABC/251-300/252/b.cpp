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
    int n,k;
    cin >> n >> k;
    vector<int>vec1(n),vec2(k);

    rep(i,0,n){
        cin >> vec1[i];
    }
    rep(i,0,k){
        cin >> vec2[i];
    }

    int max = 0;
    fore(a,vec1){
        if(max<a){
            max = a;
        }
    }

    fore(a,vec2){
        if(vec1[a-1]==max){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}