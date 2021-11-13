#include<bits/stdc++.h>
using namespace std;

int main(){
    // 入力
    int n,W;
    cin >> n >> W;
    int weight[110],value[110];
    for(int i=0; i<n; i++){
        cin >> value[i] >> weight[i];
    }

    // DPテーブル
    int dp[105][10100];

    for(int i=0; i<=W; i++){
        dp[0][i] = 0;
    }



    for(int i=0; i<n; i++){
        for(int w=0; w<=W; w++){
            if(w>=weight[i])dp[i+1][w] = max(dp[i][w-weight[i]]+value[i],dp[i][w]);
            else dp[i+1][w] = dp[i][w];
        }
    }
    cout << dp[n][W] << endl;
}