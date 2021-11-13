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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>poll(m);

    rep(i,0,m){
        int k; cin >> k;
        rep(j,0,k){
            int a; cin >> a; a--;
            poll[i].push_back(a);
        }
    }

    set<int>cnt;
    set<int>pollcnt;

    int i=0;

    while(true){
        int size = cnt.size();
        if(poll[i].size()==0){
            pollcnt.insert(i);
        }

        if(pollcnt.size()==m){
            cout << "Yes" << endl;
        }

        if(m-int(pollcnt.size())<=size){
            cout << "No" << endl;
            return 0;
        }

        if(poll[i].size()==0){
            if(i<m-1)i++;
            else i=0;
            continue;
        }

        else{
            cnt.insert(poll[i][0]);
            poll[i].erase(poll[i].begin());
            // setの中身が増えなかった場合
            // 色が被っていた場合
            while(!(cnt.size()>size)){
                cnt.erase(poll[i][0]);
                poll[i].erase(poll[i].begin());
                if(!(poll[i].size()==0)){
                    cnt.insert(poll[i][0]);
                }
            }
            // setの中身が増えた場合
            // 色が被らなかった場合
        if(i<m-1)i++;
        else i=0;
        }
    }
}