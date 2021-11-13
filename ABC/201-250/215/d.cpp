#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

vector<int>enumPrimeOnly(int n){
    int x = n;
    vector<int>res;
    // 1LLは1をintではなくlong longにしている。
    // 素因数を探している
    for(int i=2; 1LL*i*i<=n; i++){
        if(x%i==0){
            res.push_back(i);
            // 一度見つけた素因数で割れる限り割り続けて重複をなくす。
            while(x%i==0)x/=i;
        }
    }
    if(x>1)res.push_back(x);
    return res;
}

int n,m,A[101010];
bool ng[101010];

int main(){
    cin >> n >> m;
    rep(i,0,n)cin >> A[i];
    
    rep(i,0,n){
        // ここで得られるepは素因数のリスト
        auto ep = enumPrimeOnly(A[i]);
        // 得られた素因数をtrueにする
        fore(p,ep)ng[p]=true;
    }

    rep(p,2,m){
        if(ng[p]){
            // true、つまり素因数の場合はm以下の範囲でその倍数もtrueにする。
            for(int y=p+p; y<=m; y+=p){
                ng[y]=true;
            }
        }
    }

    vector<int>ans;
    rep(x,1,m+1){
        if(!ng[x])ans.push_back(x);
    }

    cout << ans.size() << endl;
    fore(x,ans)cout<<x<<endl;
}