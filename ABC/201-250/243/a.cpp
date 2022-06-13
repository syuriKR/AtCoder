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
    int v,a,b,c;
    cin >> v >> a >> b >> c;
    v %= (a+b+c);
    if(v-a<0){
        cout << "F" << endl;
        return 0;
    }
    if(v-a-b<0){
        cout << "M" << endl;
        return 0;
    }

    if(v-a-b-c<0){
        cout << "T" << endl;
        return 0;
    }
}