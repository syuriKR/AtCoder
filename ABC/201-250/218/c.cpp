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
    // 入力
    int n;
    cin >> n;
    vector<vector<char>>field1(n,vector<char>(n));
    vector<vector<char>>field2(n,vector<char>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char a;
            cin >> a;
            field1[i][j]=a;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char a;
            cin >> a;
            field2[i][j]=a;
        }
    }

    for(int i=0; i<n; i++){
        bool judge = false;
        for(int j=0; j<n; j++){
            if(field1[i][j]=='#'){
                judge = true;
            }
        }
        if(judge){
            field1.erase(field1.begin());
        }
        else{
            break;
        }
    }

    for(int i=0; i<=n; i++){
        // 全行を左にi行ずらす
        fore(a,field1){
            rotate(a.begin(),a.begin()+i,a.end());       
        }
        if(field1 == field2){
            cout << "Yes" << endl;
            return 0;
        }

    }

    // 処理
    // field1は据え置きでfield2のみ操作する


    // 出力
    if(field1 == field2)cout<<"Yes"<<endl;
    else cout <<"No" << endl;
}