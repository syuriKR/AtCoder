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
    vector<int>vec(n);
    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        vec[a]++;
        vec[b]++;
    }
    for(int i=0; i<n; i++){
        if(vec[i]==n-1){
            cout <<"Yes"<<endl;
            return 0;
        }
    }
    cout << "No" << endl;
}