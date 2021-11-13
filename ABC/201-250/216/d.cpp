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

    // ボールを削除する動作は最大n回
    set<int>set;
    int size = 0;
    int cnt = 0;
    int i = 0;
    
    while(true){
        while(true){


            if(poll[i].size()==0){
                continue;
            }
            set.insert(poll[i][0]);
            while(set.size()<=size){
                set.erase(poll[i][0]);
                poll[i].erase(poll[i].begin());
                if(poll[i].size()>0){
                    set.insert(poll[i][0]);
                }
                cnt++;
            }
            size = set.size();
            if(i<m-1)i++;
            else i=0;
        }
        
        if(set.size()==6){
                cout << "No" << endl;
                return 0;
        }

        if(cnt == n){
                cout << "Yes" << endl;
                return 0;
        }
    }
}