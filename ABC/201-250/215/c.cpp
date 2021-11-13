#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// next_permutationを絶対復習
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<string>cands;
    sort(all(s));

    do{
        cands.push_back(s);
    }while(next_permutation(all(s)));

    cout << cands[k-1] << endl;
}
