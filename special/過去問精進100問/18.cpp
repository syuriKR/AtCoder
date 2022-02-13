#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

using namespace std;

typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int binary_search(int key,vector<int>vec){
    int left = 0, right = (int)vec.size()-1;
    // 右が左より多い、または右=左の場合永続
    while(right >= left){
        int mid = left + (right-left)/2;
        if(vec[mid] == key)return mid;
        else if(vec[mid] > key)right = mid-1;
        else if(vec[mid] < key)left = mid+1;
    }
    return -1;
}


int main(){
    // 入力
    int n;cin >> n;
    vector<int>vec1(n);
    rep(i,0,n)cin>>vec1[i];

    int q;cin >> q;
    vector<int>vec2(q);
    rep(i,0,q)cin>>vec2[i];

    int cnt = 0;
    // 二部探索を用いるらしい
    rep(i,0,q){
        int judge = binary_search(vec2[i],vec1);
        if(judge != -1)cnt++;
    }
    cout << cnt << endl;
}