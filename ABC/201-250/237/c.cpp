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
    // sの先頭にsをいくつか追加して回文になるか
    string s;
    cin >> s;

    string ss = s;
    reverse(all(ss));

    if(s==ss){
        cout << "Yes" << endl;
        return 0;
    }

    // sの頭についているaをすべて消す
    int size = s.size();

    int i=0;
    while(size>0){
        if(s[i]=='a'){
            ss.pop_back();
            i++;
            size--;
        }
        else break;
    }

    s = ss;
    reverse(all(s));

    // sの後ろについているaをすべて消す
    size = s.size();
    i=0;
    while(size>0){
        if(ss[i]=='a'){
            s.pop_back();
            i++;
            size--;
        }
        else break;
    }

    ss = s;
    reverse(all(ss));

    cout << s << endl;

    if(s==ss)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}