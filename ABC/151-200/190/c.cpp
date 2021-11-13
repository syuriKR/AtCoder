#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// 定義
int n,m,k;

int main(){
    cin >> n >> m;
    vector<pair<int,int>>rule(m);
    rep(i,0,m){
        cin >> rule[i].first >> rule[i].second;
    }

    cin >> k;
    vector<pair<int,int>>ORrule(k);
    rep(i,0,k){
        cin >> ORrule[i].first >> ORrule[i].second;
    }

    // bit全探索
    // https://drken1215.hatenablog.com/entry/2019/12/14/171657
    int ans = 0;
    // 条件のon/offをbitで決めるfor文
    // kビットのビット列を全て列挙(0から2^k-1まで)
    for(int bit=0; bit<1<<k; bit++){
        // ボールを置いたか置いていないかを判別する配列
        vector<bool>ball(n);
        // 上のon/offに応じてc,dどちらにボールを置くかを決めるfor文
        for(int i=0; i<k; i++){
            const auto[c,d]=ORrule[i];
            if(bit & 1<<i){
                ball[c]=1;
            }
            else{
                ball[d]=1;
            }
        }
        int cnt=0;
        // a,bの条件を全て検証するfor文
        for(auto[a,b]:rule){
            if(ball[a]&&ball[b]){
                cnt++;
            }
        }
        chmax(ans,cnt);
    }
    cout << ans << endl;
}