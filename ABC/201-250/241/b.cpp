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
    int n,m;
    int a[1000];
    int b;
    bool used[1000];
    bool found,success;

    cin >> n >> m;
    rep(i,0,n){
        cin >> a[i];
        used[i]=false;
    }

    success = true;
    rep(i,0,m){
        cin >> b;
        found = false;

        rep(j,0,n){
            if( (a[j]==b) && (!used[j]) ){
                used[j]=true;
                found = true;
                break;
            }
        }

        if(!found){
            success=false;
        }
    }
    if(success)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

// 辞書を使う場合
// int main() {
// 	int n, m;
// 	map<int, int>mp;
// 	int x;
// 	cin >> n >> m;
// 	for (int i = 0; i < n; i++) {
// 		cin >> x;
// 		mp[x]++;
// 	}
// 	for (int i = 0; i < m; i++) {
// 		cin >> x;
// 		if (mp[x] == 0) {
// 			cout << "No" << endl;
// 			return 0;
// 		}
// 		mp[x]--;
// 	}
// 	cout << "Yes" << endl;
// 	return 0;
// }