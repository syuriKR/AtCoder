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
    int n,x;
    cin >> n >> x;

    vector<bool>judge(n);
    rep(i,0,n){
        judge[i] = false;
    }
    vector<int>vec(n);
    rep(i,0,n){
        int num;
        cin >> num;
        num--;
        vec[i] = num;
    }

    x--;
    judge[x] = true;

    while(true){
        int a = vec[x];
        if(judge[a]==true)break;
        else{
            judge[a] = true;
            x = a;
        }
    }

    int cnt = 0;
    rep(i,0,n){
        if(judge[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
}