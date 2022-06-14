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

    map<string,int>candidate;

    rep(i,0,n){
        string name;
        cin >> name;
        if(candidate.count(name)){
            candidate[name]++;
        }
        else candidate[name]=1;
    }

    int ans = 0;
    string ansname;

    fore(i,candidate){
        if(ans<i.second){
            ans = i.second;
            ansname = i.first;
        }
    }

    cout << ansname << endl;
}