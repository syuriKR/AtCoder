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
    long long n;
    cin >> n;
    int cnt3 = 0;
    vector<int>cnt3vec(3);
    while(n){
        cnt3+=n%10;
        cnt3vec[n%10%3]++;
        n/=10;
    }

    int ans;
    int k = cnt3vec[0]+cnt3vec[1]+cnt3vec[2];

    if(cnt3%3==0)ans=0;

    else if(cnt3%3==1){
        if(cnt3vec[1]>=1){
            if(k==1) ans = -1;
            else ans = 1;
        }
        else if(cnt3vec[2]>=2){
            if(k==2) ans = -1;
            else ans = 2;
        }
        else ans=-1;
    }

    else{
        if(cnt3vec[2]>=1){
            if(k==1)ans=-1;
            else ans = 1;
        }
        else if(cnt3vec[1]>=2){
            if(k==2)ans=-1;
            else ans = 2;
        }
        else ans = -1;
    }
    cout << ans << endl;
}