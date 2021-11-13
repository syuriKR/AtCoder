#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
int Q;

int main(){
    cin >> Q;

    ll offset = 0;
    min_priority_queue<ll>que;

    rep(_,0,Q){
        int T; cin >> T;

        if(T==1){
            ll num; cin >> num;
            // offsetをマイナスして最初に入れたボールと途中に入れたボールでoffsetの値が違う問題を解決する
            // マイナスしないと後から入れたボールにも最初のボールと同一にoffsetがかかってしまうため結果が狂う
            que.push(num-offset);
        }
        else if(T==2){
            ll num; cin >> num;
            offset+=num;
        }
        else{
            ll ans = que.top() + offset;
            que.pop();
            cout << ans << endl;
        }
    }
}