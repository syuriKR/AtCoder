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

    vector<string>family(n),first(n);

    rep(i,0,n){
        cin >> family[i] >> first[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)continue;
            else{
                // familyをあだ名として使う場合、他人の苗字と名前と一緒じゃない必要がある。
                if(family[i]==family[j] || family[i]==first[j]){
                    // familyをあだ名に使えない場合、名前をあだ名にするしかない。
                    // firstをあだ名として使う場合、他人の苗字と名前と一緒じゃない必要がある。
                    for(int k=0; k<n; k++){
                        if(i==k)continue;
                        else{
                            if(first[i]==family[k] || first[i]==first[k]){
                                cout << "No" << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}