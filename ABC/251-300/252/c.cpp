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

    vector<string>s(100);
    rep(i,0,n){
        cin >> s[i];
    }
    int ans = 100100100;

    // 0で止める場合から9で止める場合まで検証する(i)
    // 0からN個までの数字配列の中から探す(j)
    // 数字配列の場所、0番目から9番目まで。
    for(int i=0; i<=9; i++){
        // iが0番目から9番目のどこにあるか保存する配列
        vector<int>vec(10);
        int max = 0;
        int maxnum;
        for(int j=0; j<n; j++){
            for(int k=0; k<10; k++){
                if(s[j][k]-'0'==i){
                    vec[k]++;
                }
            }
        }

        for(int l=0; l<10; l++){
            // <ではなく<=を含むことによって、周回数が同じ場合後ろの数字で時間を考える。
            if(max<=vec[l]){
                // 最も多い周回回数
                max = vec[l];
                // その周回回数の場所(l番目)
                maxnum = l;
            }
        }
        int nowans = 10*(max-1)+maxnum;
        chmin(ans,nowans);
    }
    cout << ans << endl;
}