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
    int n;
    cin >> n;
    vector<pair<string,string>>name(n);
    rep(i,0,n){
        cin >> name[i].first >> name[i].second;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(name[i].first==name[j].first && name[i].second==name[j].second){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}