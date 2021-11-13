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
    vector<pair<int,int>>vec(n);
    rep(i,0,n){
        cin >> vec[i].first >> vec[i].second;
    }

    vector<pair<int,int>>memo;
    ll cnt = 0;

    // 任意の二点でx座標が同じときのy座標の組み合わせを記録
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i].first == vec[j].first){
                memo.push_back(make_pair(vec[i].second,vec[j].second));
            }
        }
    }
    
    ll nowcnt;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i].first == vec[j].first){
                nowcnt = -1;
                fore(a,memo){
                    if( (vec[i].second == a.first && vec[j].second == a.second) || (vec[i].second == a.second && vec[j].second == a.first) ){
                        nowcnt++;
                    }
                }
                cnt += nowcnt;
            }
        }
    }
    cout << cnt << endl;
}