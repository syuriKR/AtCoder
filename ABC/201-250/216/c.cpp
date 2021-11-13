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
    ll n;
    cin >> n;
    string ans;
    while(true){
        if(n==1){
            ans+='A';
            break;
        }
        else if(n%2==0){
            ans+='B';
            n/=2;
        }
        else{
            ans+='A';
            n--;
        }
    }
    reverse(all(ans));
    cout << ans << endl;
}