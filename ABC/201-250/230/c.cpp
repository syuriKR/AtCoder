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
    ll n,a,b;
    ll p,q,r,s;
    cin >> n >> a >> b;
    cin >> p >> q >> r >> s;

    ll left1 = max(1-a,1-b);
    ll right1 = min(n-a,n-b);

    ll left2 = max(1-a,b-n);
    ll right2 = min(n-a,b-1);

    // vector<vector<char>>vec(n,vector<char>(n));

    // for(ll i=0; i<n; i++){
    //     for(ll j=0; j<n; j++){
    //         vec[i][j]='.';
    //     }
    // }

    // for(ll i=left1; i<=right1; i++){
    //     vec[a+i-1][b+i-1]='#';
    // }

    // for(ll i=left2; i<=right2; i++){
    //     vec[a+i-1][b-i-1]='#';
    // }

    p--;q--;r--;s--;
    // for(ll i=p; i<=q; i++){
    //     for(ll j=r; j<=s; j++){
    //         cout << vec[i][j];
    //     }
    // }

    vector<vector<char>>vec(q-p+1,vector<char>(s-r+1));
    for(int i=0; i<q-p+1; i++){
        for(int j=0; j<s-r+1; j++){
            vec[i][j]='.';
        }
    }

    ll min1 = min(a+left1-1,a+right1-1);
    ll max1 = max(a+left1-1,a+right1-1);
    ll min2 = min(b+left1-1,b+right1-1);
    ll max2 = max(b+left1-1,b+right1-1);

    ll min3 = min(a+left2-1,a+right2-1);
    ll max3 = max(a+left2-1,a+right2-1);
    ll min4 = min(b-left2-1,b-right2-1);
    ll max4 = max(b-left2-1,b-right2-1);

    for(int i=0; i<q-p+1; i++){
        for(int j=0; j<s-r+1; j++){
            if( (min1<=i+p+1 && i+p+1<= max1 && min2<=j+r+1 && j+r+1 <= max2) && j-i-max(p-r,r-p) == b-a){
                vec[i][j]='#';
            }
            if( (min3<=i+p+1 && i+p+1<= max3 && min4<=j+r+1 && j+r+1 <= max4) && i+j+p+r == a+b){
                vec[i][j]='#';
            }
        }
    }

    for(int i=0; i<q-p+1; i++){
        for(int j=0; j<s-r+1; j++){
            cout << vec[i][j];
        }
    }
}