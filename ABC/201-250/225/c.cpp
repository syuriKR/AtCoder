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
    int n,m;
    cin >> n >> m;

    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> vec[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m-1; j++){
            if(vec[i][j+1]-vec[i][j] != 1){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    for(int i=0; i<n-1; i++){
        if(vec[i+1][0]-vec[i][0] != 7){
            cout << "No" << endl;
            return 0;
        }
    }

    int a = vec[0][0]%7;
    if(m!=1){
        if(a>7-m+1 || a==0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}