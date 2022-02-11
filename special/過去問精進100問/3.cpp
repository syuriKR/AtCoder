#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// https://qiita.com/e869120/items/eb50fdaece12be418faa#2-3-%E5%88%86%E9%87%8E%E5%88%A5%E5%88%9D%E4%B8%AD%E7%B4%9A%E8%80%85%E3%81%8C%E8%A7%A3%E3%81%8F%E3%81%B9%E3%81%8D%E9%81%8E%E5%8E%BB%E5%95%8F%E7%B2%BE%E9%81%B8-100-%E5%95%8F
// https://atcoder.jp/contests/abc122/tasks/abc122_b

string s;

int main(){
    cin >> s;
    int size = s.size();
    int cnt = 0;

    for(int i=0; i<size; i++){
        int nowcnt = 0;
        for(int j=0; j<size-i; j++){
            if(s[i+j]=='A' || s[i+j]=='C' || s[i+j]=='G' || s[i+j]=='T'){
                nowcnt++;
            }
            else break;
        }
        chmax(cnt,nowcnt);
    }
    cout << cnt << endl;
}