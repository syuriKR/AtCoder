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

    map<int,int>dict;

    rep(i,0,q){
        int query;
        cin >> query;

        if(query == 1){
            int x;
            cin >> x;
            if(dict.count(x)){
                dict[x]++;
            }
            else{
                dict[x]=1;
            }
        }

        else if(query == 2){
            int x,c;
            cin >> x >> c;
            if(dict.count(x)){
                dict[x]-=c;
                if(dict[x]<=0){
                    dict.erase(x);
                }
            }
        }

        else{
            pair<int,int>min = *begin(dict);
            pair<int,int>max = *rbegin(dict);

            cout << max.first - min.first << endl;
        }
    }
    return 0;
}