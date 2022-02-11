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
// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja

int n;
int num[21];
int q;
int num2[201];

int ans;

bool judge[201];

int main(){
    // 入力
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> num2[i];
    }

    for(int i=0; i<201; i++)judge[i]=false;

    // 先にq個の候補についてfor文を書くと和を求める過程を何度も繰り返してTLE
    // 和の組み合わせを全部ansに放り込む
    for(int bit = 0; bit< (1<<n); bit++){
        ans = 0;
        for(int i=0; i<n; i++){
            if(bit & (1<<i)){
                ans+=num[i];
            }
        }
        // ansに放り込んだものとq個の候補をすべて照らし合わせ同値ならtrue
        for(int a=0; a<q; a++){
            if(ans==num2[a]){
                judge[a]=true;
            }
        }
    }

    for(int i=0; i<q; i++){
        if(judge[i])cout << "yes"<<endl;
        else cout << "no" << endl;
    }
}