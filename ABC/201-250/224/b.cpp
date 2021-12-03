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
    int h,w;
    cin >> h >> w;
    vector<vector<int>>vec(h,vector<int>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            int a;
            cin >> a;
            vec[i][j]=a;
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            for(int k=i+1; k<h; k++){
                for(int l=j+1; j<w; l++){
                    if(vec[i][j]+vec[k][l] > vec[i][l]+vec[k][j]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
}