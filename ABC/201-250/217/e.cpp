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
    int q;
    cin >> q;
    // Q1
    queue<int>que;
    // Q2
    priority_queue<int>Pque;

    rep(i,0,q){
        int a;
        cin >> a;
        if(a==1){
            int x;
            cin >> x;
            que.push(x);
        }
        else if(a==2){

        }
        else{
            
        }
    }
}