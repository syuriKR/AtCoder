#include<bits/stdc++.h>
using namespace std;

int main(){
    const long long MOD = 1000000007;
    string s;
    cin >> s;
    string t = "chokudai";
    int dp[101010][10];
    int len = s.size();

    // dp[i][j]は入力された文字i文字目までを使ってchokudaiのj文字目までを選択する方法
    for(int i=0; i<=len; i++)dp[i][0]=1;
    for(int i=1; i<=8; i++)dp[0][i]=0;
    for(int i=1; i<=len; i++){
        for(int j=1; j<=8; j++){
            if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            else dp[i][j]=dp[i-1][j];
            dp[i][j]%=MOD;
        }
    }


    cout << dp[len][8] << endl;
}