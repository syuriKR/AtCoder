#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long>vec(n);

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    
    // bool[n][10001]ではだめっぽい...なぜ？
    vector<vector<bool>> dp(n+1, vector<bool>(10001, false));

    for(int i=0; i<n+1; i++)dp[i][0]=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<=10000; j++){
            if(dp[i][j]){
                dp[i+1][j]=true;
                dp[i+1][j+vec[i]]=true;
            }
        }
    }
    long long ans = 0;
    for(int j=0; j<=10000; j++){
        if(dp[n][j])ans++;
    }
    cout << ans <<endl;
    return 0;
}