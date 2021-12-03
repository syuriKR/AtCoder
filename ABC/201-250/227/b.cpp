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

    int ans = 0;

    // 4*a*b+3*(a+b)=xとなるa,bが存在するとき条件成立
    for(int i=0; i<n; i++){
        bool judge = false;
        int s;
        cin >> s;
        for(int a=1; a<=250; a++){
            for(int b=1; b<=250; b++){
                if(4*a*b+3*(a+b) == s){
                    ans++;
                    judge = true;
                    break;
                }
            }
            if(judge)break;
        }
    }
    cout << n-ans << endl;
}