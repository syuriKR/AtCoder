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
    int n,a,b;
    cin >> n >> a >> b;

    // n*a回繰り返し(縦)
    for(int h=0; h<n; h++){
        for(int i=0; i<a; i++){

            // n*b回繰り返し(横)
            // 縦2,4,6...番目のグループ(左端が黒色)
            if(h%2==0){
                for(int j=0; j<n; j++){
                    for(int k=0; k<b; k++){
                        // 横2,4,6...番目のグループ(白)
                        if(j%2==0){
                            cout << '.';
                        }
                        // 横1,3,5...番目のグループ(黒)
                        else{
                            cout << "#";
                        }
                    }
                }
                cout << endl;
            }
            // 縦1,3,5...番目のグループ(左端が白色)
            else{
                for(int j=0; j<n; j++){
                    for(int k=0; k<b; k++){
                        // 横2,4,6...番目のグループ(黒)
                        if(j%2==0){
                            cout << '#';
                        }
                        // 横1,3,5...番目のグループ(白)
                        else{
                            cout << ".";
                        }
                    }
                }
                cout << endl;
            }
        }
    }
}